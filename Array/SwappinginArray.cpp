#include<iostream>
using namespace std;

int main()
{
    int A[5]={1,2,3,4,5};
    int temp=0;
    cout<<A[1]<<" "<<A[0]<<endl;
    temp=A[0];
    A[0]=A[1];
    A[1]=temp;
    cout<<A[1]<<" "<<A[0];
    return 0;
}