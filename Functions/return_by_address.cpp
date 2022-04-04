#include<iostream>
using namespace std;
int *fun()
{
    int*p=new int [5];
    for(int i=0; i<5; i++)
    {
        p[i]=5*i;
    }
    cout<<p<<endl;
    return p;
}
int main()
{
    int*q=fun();
    for(int i=0;i<5;i++)
    {
        cout<<q[i]<<endl;
    }
    cout<<q<<endl;
    return 0;
}
//since, the address of p and q are same that means q is pointing on the same memory