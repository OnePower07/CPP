#include<iostream>
using namespace std;

class rectangle
{
    private:
    int length;;
    int breadth;
    public:
    rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter();
};
int rectangle::perimeter()
{
    return 2*(length+breadth);
}
int main()
{
    rectangle r(10,5);
    cout<<"Area: "<<r.area()<<endl;
    cout<<"Perimeter: "<<r.perimeter();
    return 0;
}