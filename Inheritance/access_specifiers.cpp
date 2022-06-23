#include<iostream>
using namespace std;
class base
{
    private:
    int a;
    protected:
    int c;
    public:                   //All access specifiers are accesible in the parent class
    int b;
    void funbase()
    {
        a=10,b=5,c=20;
    }
};
class derived:base
{
    public:
    void funderived()       //Only protected and public are accessible in child class
    {
        //a=1;
         b=2;
         c=3;
    }
};
int main()
{
    base x;                 //Only public are accessible in grandchild class
    //x.a=13;
    x.b=11;
    //x.c=14;
}