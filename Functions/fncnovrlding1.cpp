#include<iostream>
using namespace std;
int absolute(int a,int b)
{
if(a<0){
    a=-a;
    return a;
}
}

float absolute(float b)
{
    if(b<0.0){
    b=-b;
    return b;
}
}
int main()
{
    cout<<"Absolute value is: "<<absolute(-5)<<endl;
    cout<<"Absolute value is: "<<absolute(-5.443f)<<endl;
    return 0;
}