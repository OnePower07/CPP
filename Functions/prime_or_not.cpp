#include<iostream>
using namespace std;
string prime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        return "Non prime";
    }
    return "Prime";
}
int main(){
    int a=8;
    cout<<prime(a);
}