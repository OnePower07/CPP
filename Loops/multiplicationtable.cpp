#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the number you want multiplication table for: "<<endl;
    cin>>n;

    for(i=1;i<=10;i++)
    {
        cout<<n<<"x"<<i<<"="<<i*n<<endl;//multiplication format
    }
    return 0;
}