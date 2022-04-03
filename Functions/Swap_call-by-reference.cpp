#include<iostream>
using namespace std;
void swap(int&a, int &b)
{
    int temp;
    temp= a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;
    cout<<"Enter x and y: "<<endl;
    cin>>x>>y;
    swap(x,y);
    cout<<"x is: "<<x<<endl;
    cout<<"y is: "<<y<<endl;
}