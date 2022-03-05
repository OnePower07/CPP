#include<iostream>
using namespace std;
int main()
{
    int min,max,i;
    int A[5]={2,1,6,9,8};
    min = A[0]; //initialisation
    max = A[0];
    for (int i=0;i<5;i++)//for loop
    {
        if(A[i]<min)
        {
            min=A[i];
        }
        else if(A[i]>max)
        {
            max=A[i];
        }
    }
    cout<<"Max = "<<max<<endl;
    cout<<"Min = "<<min<<endl;
}