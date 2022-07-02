#include<iostream>
using namespace std;
class demo
{
    public:
    demo()
    {
        cout<<"Costructor of demo"<<endl;
    }
    ~demo()
    {
        cout<<"Desturctor of demo"<<endl;
    }
};
void fun()
{
    demo d;
}

int main()
{
    fun();
    return 0;
}