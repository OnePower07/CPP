#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }
    // rectangle(rectangle &r)
    // {
    //     length=r.length;
    //     breadth=r.breadth;
    // }
    void setLength(int l)
    {
        if(l>=0)
        {
            length=l;
        }
        else{
            length=0;
        }
    }
    void setBreadth(int b)
    {
        if(b>=0){
            breadth=b;
        }
        else{
            breadth=0;
        }
    }
    int getLength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
    int main()
    {
        rectangle r(10,6);
        cout<<r.area();
        return 0;
    }