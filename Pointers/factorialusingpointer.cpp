#include<iostream>
using namespace std;
void factorial(int *fact,int i,int n)
{
    *fact=1;
 for (i=1;i<=n;i++)
     *fact=*fact*i;
}
int main()
{
    int a=5,fac;
    fac=factorial*(&a);
    cout<<"Factorial: "<<fac;
    return 0;
}