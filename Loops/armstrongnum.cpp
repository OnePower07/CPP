#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0,m;
    cout<<"Enter number: "<<endl;
    cin>>n;
    m=n;
    
    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+r*r*r; //Sum
    }
    if(sum==m)
    {
        cout<<"This is Armstrong number"<<endl;
    }
    else
    cout<<"Not an Armstrong number";
    return 0;
}