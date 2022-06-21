#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle();
    int getlength();
    int getbreadth();
    void setlength(int l);
    void setbreadth(int b);
    int area();
    int perimeter();
};
class cuboid: public rectangle
{
    private:
    int height;
    public:
    cuboid(int l=0, int b=0, int h=0)
    {
        height=h;
        setlength(l);
        setbreadth(b);
    }
    int volume()
    {
        return getlength()*getbreadth()*height;
    }
    int getheight()
{
    return height;
}
};
rectangle::rectangle()
{
    int l=1;
    int b=1;
}
int rectangle::getlength()
{ 
    return length;
}
int rectangle::getbreadth()
{
    return breadth;
}
void rectangle::setlength(int l)
{
    if(l>0)
    {
        length=l;
    }
    else
    {
    length=0;
    }
}
void rectangle::setbreadth(int b)
{
    if(b>0)
    {
        breadth=b;
    }
    else
    {
        breadth=0;
    }
}
int rectangle::area()
{
    return length*breadth;
}
int rectangle::perimeter()
{
    return 2*(length+breadth);
}
int main()
{
 cuboid c(15,10,5);
 cout<<"Length is: "<<c.getlength()<<endl;
 cout<<"Breadth is: "<<c.getbreadth()<<endl;
 cout<<"Height is: "<<c.getheight()<<endl;
 cout<<"Volume is: "<<c.volume()<<endl;
}