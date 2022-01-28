#include<iostream>
using namespace std;
int main(){
    int n,r,rev=0,m;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    m=n;
    while(n>0){
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==m){
        cout<<"Palindrome Number"<<endl;
    }
        else{
        cout<<"Not a Palindrome number"<<endl;
        }
    return 0;
}