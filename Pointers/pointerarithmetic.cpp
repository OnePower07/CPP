#include<iostream>
using namespace std;
int main()
{
    char A[5]={'a','b','c','d','e'};
    char *p = A;
    // 200, 204, 208, 212, 216
    char *q = &A[3];
    int d = q-p;
    // p++;
    cout << d;
    // for (int i=0; i<5 ; i++){
    // cout<<i[A]<<endl;
    // }
    
}