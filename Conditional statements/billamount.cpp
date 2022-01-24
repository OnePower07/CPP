#include<iostream>
using namespace std;
int main(){
    int bill;
    cout<<"Enter Total Amount: "<<endl;
    cin>>bill;
    if(bill>=100 && bill<500){
        cout<<"Discount of 10% "<<endl;
    }
    else if(bill>=500){
        cout<<"Discount of 20% "<<endl;
    }
else {
    cout<<"No discount"<<endl;
}
return 0;
}