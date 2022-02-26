#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p; //declaration
    p=&a; //initialisation
    cout<<a<<endl;//value 
    cout<<&a<<endl;;//address
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p;

}
