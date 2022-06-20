#include<iostream>
using namespace std;
class base
{
    public:
    int x;
    void show()
    {
        cout<<x<<endl;
    }
};
class derived: public base
{
    public:
    int y;
    void display()
    {
        cout<<x<<" "<<y;
    }
};
int main()
{
    base b;
    b.x=22;
    b.show();

    derived d;
    d.x=10;
    d.y=15;
    d.show();
    d.display();
};