#include<iostream>
using namespace std;
template <class T>
T add(T x, T y, T z)
{
    return x+y+z;
}
int main()
{
    int a=12, b=12, c=22, d;
    cout<<"Sum is: "<<add(a,b,c)<<endl;
    return 0;
}