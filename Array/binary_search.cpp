#include<iostream>
using namespace std;
int main(){
    int A[5];
    int l=0,h=4,key,n=5,mid,a=0;
     cout<<"Enter the elements of an Array: "<<" "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter Key: "<<endl;
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid]){
            cout<<"Element found at: "<<mid;
            a=1;
        }
        else if(key<A[mid]){
            h=mid-1;
        }
        else{
            l=mid+1; 
        }
        if(a==0){
        cout<<"Not found at any index"<<endl;
    }
    return 0;
}
}