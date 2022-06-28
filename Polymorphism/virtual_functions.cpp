#include<iostream>
using namespace std;
class parent 
{
    public:
   virtual void display()
    {
        cout<<"Display of parent"<<endl;
    }
};
class child: public parent
{
    public:
    void display()
    {
        cout<<"display of child";
    }
};
int main()
{
    parent *p=new child();
    p->display();
}