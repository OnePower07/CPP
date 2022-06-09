#include<iostream>
using namespace std;
float factorial(float j)
{
    float fact=1;
    for(int i=1;i<=j;i++)
    {
    fact=fact*i;
    }
    return fact;
}
int main()
{
    float a,j;
    for(j=1;j<5;j++)
    {
     a=1/factorial(j);
     cout<<a<<"+";
    }
    return 0;
}