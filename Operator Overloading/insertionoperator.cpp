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
 friend ostream & operator<<(ostream&out, Complex&c1);
};
ostream & operator<<(ostream &out, Complex &c1)
{
    out<<c1.real<<"+i"<<c1.img;
    return out;
}
int main()
{
    Complex c1(3,7);
    Complex c2(5,4);
    cout<<c1<<endl;
    operator<<(cout,c1);
}