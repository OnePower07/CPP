#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,4,6,8,10};
    int *p = A;
    int *q =&A[3];
    int d=q-p;
    //p++;
    cout<<d;
}