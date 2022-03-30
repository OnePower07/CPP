#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
float sum(float a, float b)
{
    return a+b;
}
int sum(int a, int b, int c)
{
    return a+b+c;
}
int main()
{
  cout<<"Sum is: "<<sum(4,5)<<endl;
  cout<<"Sum is: "<<sum(4.4f,5.3f)<<endl;
  cout<<"Sum is: "<<sum(3,5,3)<<endl;
}