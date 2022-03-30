#include<iostream>
using namespace std;
template <class T>
T maxim(T x, T y)
{
    if(x>y)
    return x;
    else
    return y;
}
int main()
{
int a,b;
cout<<"Enter the numbers: "<<endl;
cin>>a>>b;
cout<<"Maximum is: "<<maxim(a,b)<<endl;
return 0;
}