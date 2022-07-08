#include<iostream>
using namespace std;
#define c cout

class base
{
    public:
    base()
    {
        c<<"Base Constructor created"<<endl;
    }
    ~base()
    {
        c<<"Base Constructor destroyed"<<endl;
    }
};
class derived: public base
{
    public:
    derived()
    {
        c<<"derived constructor created"<<endl;
    }
    ~derived()
     {
     c<<"derived constructor destroyed"<<endl;
     }
};
int main()
{
    derived d;
}