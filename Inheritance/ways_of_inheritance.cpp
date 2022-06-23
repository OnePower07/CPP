#include<iostream>
using namespace std;
class parent
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void display()
    {
        a=10;
        b=12;
        c=12;
    }
};
class child:protected parent
{
    private:

    protected:

    public:
    void funchild()
    {
        //a=1;
        b=2;
        c=3;
    }
};
class grandchild:protected child
{
    private:

    protected:

    public:
    void fungrandchild()
    {
        //a=1;
        b=2;
        c=3;
    }
};
int main()
{
    parent p;
    //p.a=20;
    //p.b=21;
    p.c=23;
}