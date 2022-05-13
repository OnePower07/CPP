#include<iostream>
using namespace std;
int main()
{
    int i,j,temp=0;
    int A[4]={1,3,4,5}; 
    i=0;
    j=3;
    while(i<j) 
    {
        temp = A[i];  
        A[i] = A[j];  
        A[j] = temp; 
        i++;j--;
    } 
    for(i=0;i<4;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;  
}