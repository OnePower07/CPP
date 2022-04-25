#include<iostream>
using namespace std;
void evenodd(int a)
{
     if(a%2==0)
     {
         cout<<"a is even"<<endl;
     }
     else{
         cout<<"a is odd"<<endl;
     }
}

int main()
{
    int a=11;
    evenodd(a);
}