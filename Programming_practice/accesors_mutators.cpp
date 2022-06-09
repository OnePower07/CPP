#include<iostream>
using namespace std;
class square
{
    private:
    int side;

    public:
    void setSide(int s)
    {
        if(s>=0)
        {
            side=s;
        }
        else
        {
            side=0;
        }
    }
    int getSide()
    {
        return side;
    }
    int area()
    {
        return side*side;
    }
    int perimeter()
    {
        return 4*side;
    }
};

int main()
{
    square s;
    s.setSide(5);
    cout<<s.area();
    return 0;
}