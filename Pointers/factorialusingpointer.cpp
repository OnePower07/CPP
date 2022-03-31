#include<iostream>
using namespace std;
int main()
{
int*p,n=5;
int factorial=1;
p=&factorial;
for (int i = 1; i <= n; i++)
{
    *p *= i;
}
cout<<"factorial: "<<*p;
return 0;
}