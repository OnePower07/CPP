#include<iostream>
using namespace std;
int main()
{
int i,sum=0;
int A[10]={1,2,3,4,8,5,6,32,5,9};
for(i=0;i<10;i++)
{
    if(A[i]%2==0)
    {
        sum=sum+A[i];
    }
}
cout<<sum;
return 0;
}