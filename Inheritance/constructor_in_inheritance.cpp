#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"Default of base"<<endl;
    }
    base(int x)
    {
        cout<<"Params of base "<<x<<endl;
    }
};
class derived:public base
{
    public:
    derived()
    {
        cout<<"Default of derived"<<endl;
    }
    derived(int a)
    {
        cout<<"Params of derived "<<a<<endl;
    }
    derived(int x,int a):base(x)
    {
        cout<<"Params of special derived "<<a<<endl;
    }
};
int main()
{
    derived d;
}