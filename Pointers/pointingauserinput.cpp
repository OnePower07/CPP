#include<iostream>
using namespace std;
int main(){
int x;
cout<<"Enter value of x: "<<endl;
cin>>x;
int *p;
p=&x;
cout<<"The address of variable x is: "<<&x;
}