#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;
    
    int area()
    {
        return length*breadth;
    }
    // int perimeter()
    // {
    //     return 2*(length+breadth);
    // }
};
int main()
{
    rectangle r1,r2;
    r1.length=10;
    r1.breadth=20;
    cout<<r1.area()<<endl;
    r2.length=15;
    r2.breadth=10;
    cout<<r2.area()<<endl;
    return 0;
}