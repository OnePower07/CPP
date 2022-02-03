#include<iostream>
using namespace std;
int main(){
    int i,j,n=4;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i+j>=n)
            cout<<"*";
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}