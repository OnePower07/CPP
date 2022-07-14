#include<iostream>
using namespace std;
int main(){
    int A[]={2,4,2,10,3,9,2,7};
    int max=A[0];
    for(int i=0;i<8;i++){
        if(A[i]>max)
        max=A[i];
    }
    cout<<"Maximum value from the elements of given Array is: "<<max;
    return 0;
}