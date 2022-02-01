#include<iostream>
using namespace std;
int main()
{
    int A[5],n=5,key,a=0;
    cout<<"Enter the elements of an Array: "<<" "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the key to search: ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==A[i])
        {
            cout<<"Element found at index number: "<<i<<endl;
            a=1;
        }
    }
    if(a==0){
        cout<<"Not found"<<endl;
    }
        return 0;
}
