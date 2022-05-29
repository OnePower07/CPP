#include <iostream>
using namespace std;
int main()
{
    int base, height;
    int area;
    cout << "Enter Height and base of the triangle:" << endl;

    cin >> height >> base;

    area = (base * height) / 2;

    cout << "Area of triangle is: " << area;


    return 0;

}