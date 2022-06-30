#include<iostream>
using namespace std;
int division(int x, int y)
{
    if(y==0)
    {
        throw 1;
    }
    return x/y;
}

int main()
{
    int a=10,b=2,c;
    try
    {
        c=division(a,b);
        cout<<c;
    }
    catch(int e)
    {
        cout<<"Division by zero\n"<<"ERROR "<<e<<endl;
    }
    return 0;
}