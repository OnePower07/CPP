#include<iostream>
using namespace std;
int g=0;
void fun()
{
    g++;
    cout<<g<<endl;
}
int main()

{
    cout<<g<<endl;
    fun();
    cout<<g<<endl;
}