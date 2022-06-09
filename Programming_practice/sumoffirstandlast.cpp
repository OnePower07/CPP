#include<iostream>
using namespace std;
int main()
{
    int n,f,l,sum;
    cout<<"Enter number: "<<endl;
    cin>>n;
    f=n;
    l=n%10;
    for(f=n;f>=10;f=f/10);
    sum=f+l;
    cout<<"First digit : "<<f<<endl;
    cout<<"Last digit : "<<l<<endl;
    cout<<"Sum is: "<<sum;
    return 0;
}