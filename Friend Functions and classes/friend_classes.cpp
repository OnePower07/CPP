#include<iostream>
using namespace std;
class your;
class my
{
    private:
    int a=10;
    friend your;
};
class your
{
    public:
    my m;
    void fun()
    {
        cout<<m.a;
    }
};