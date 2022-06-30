#include<iostream>
using namespace std;

int main()
{
    int a=10,b=0,c;
    try
    {
        if(b==0)
        throw 404;
        c=a/b;
        cout<<c;
    }
    catch(int e)
    {
        cout<<"Division by zero\n"<<"ERROR "<<e<<endl;
    }
    return 0;
}