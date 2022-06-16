#include<iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int img;
    public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
void display() 
 { 
 cout<<real<<"+i"<<img<<endl; 
 }
friend Complex operator+(Complex c1,Complex c2);
};
Complex operator+(Complex c1,Complex c2)
{
    Complex t;
    t.real=c2.real+c1.real;
    t.img=c2.img+c1.img;
    return t;
}

int main()
{
    Complex c1(3,7);
    Complex c2(5,4);
    Complex c3;
    c3=c1+c2;
     c3.display();
    return 0;
}