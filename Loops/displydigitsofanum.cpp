#include<iostream>
using namespace std;
int main(){
    int n,r;
    cout<<"Enter number: "<<endl;
    cin>>n;
// While loop 

    while(n>0){
        r=n%10;
        n=n/10;
        cout<<r<<endl;
    }
    return 0;
}