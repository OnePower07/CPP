#include<iostream>
using namespace std;
int main(){
    int A[2][2]={{2,3,},{3,5}};
    int B[2][2]={{3,5},{3,5}};
    int C[2][2];

    for(int i=0; i<2; i++){
        for(int j=0;j<2;j++){
            C[2][2]=A[2][2]*B[2][2];
        }
    }
    for(int i=0; i<2 ; i++){
        for(int j=0; j<2 ;j++){
            cout<<C[2][2];
        }
        cout<<endl;
    }
    return 0;
}