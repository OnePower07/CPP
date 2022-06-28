#include<iostream>
using namespace std;
class parent 
{
    public:
    virtual void display()=0;
};
class child: public parent
{
    public:
    void display()
    {
        cout<<"display of child"<<endl;
    }
};
class grandchild: public parent
{
    public:
    void display()
    {
        cout<<"display of grandchild"<<endl;
    }
};
int main()
{
    parent *p=new child();
    p->display();

    p=new grandchild();
    p->display();
}