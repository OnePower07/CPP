#include<iostream>
using namespace std;
int main(){
    int A[9]={3,5,16,54,12,23,56,65,5}, max;
    max = A[0];//2d Array declaration
    for(int i=0; i<9 ;i++)
    {
        if(A[i]>max)
        max = A[i];
    }cout << "maximum value is: " << max << endl;

    return 0;

}