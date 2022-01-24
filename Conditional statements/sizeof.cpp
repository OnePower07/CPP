#include <iostream>
using namespace std;
int main()
{
    int a;  //declaration
    a = 10; //initialisation

    cout << "size of integer=" << sizeof(a) << endl;

    float b;
    cout << "size of float=" << sizeof(b) << endl;

    char c;
    cout << "size of char=" << sizeof(c) << endl;

    bool d;
    cout << "size of bool=" << sizeof(d) << endl;
}