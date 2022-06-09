#include<iostream>
using namespace std;
int main()
{
int i,sum=0;
int A[5]={1,2,3,4,8};
for(i=0;i<5;i+=2)
{
  sum=sum+A[i];
}
 cout<<sum;
}