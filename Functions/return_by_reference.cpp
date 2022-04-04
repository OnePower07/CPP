#include<iostream>
using namespace std;
int & fun(int &a)
{
    cout<<a<<endl;//a is 10
    return a;
}
int main()
{
    int x=10;
    fun(x)=25; // a is 25  This is the beauty of cpp that u can use the func as L value and can
                // change the value of the variable
    cout<<x<<endl;
}