#include<iostream>
using namespace std;
int factorial(int n)
{
int fact=1;
if(n==0 || n==1)
    return fact;
for(int i=1; i<=n; i++)
{
    fact=fact*i;
}
return fact;
}
int main()
{
    int x=5;
    cout<<factorial(x);
}