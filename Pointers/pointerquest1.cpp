//Write a program to print a number which is entered from keyboard using pointer.
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number: "<<endl;
    cin>>x;
    cout<<"The number is: "<<*(&x);
}
