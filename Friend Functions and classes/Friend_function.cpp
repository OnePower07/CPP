#include<iostream>
using namespace std;
class base
{
    private:
    int a;
    protected:
    int t;
    public:
    int c;
    friend void func();
};
void func()
{
    base b;
    b.a=10;
    b.t=12;
    b.c=133;
}