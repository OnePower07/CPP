#include<iostream>
using namespace std;
int main(){
    int bill;//declaration
    cout<<"Enter Total Amount: "<<endl;
    cin>>bill;//taking input
    if(bill>=100 && bill<500){
        cout<<"Discount of 10% "<<endl; //conditional statement
    }
    else if(bill>=500){
        cout<<"Discount of 20% "<<endl;
    }
else {
    cout<<"No discount"<<endl;
}
return 0;
}