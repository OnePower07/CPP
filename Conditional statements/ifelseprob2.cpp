#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "enter the value of a"<< endl;
    cin >> a;
    cout << "enter the value of b" << endl;
    cin >> b;

    if (a > b)
    {
        cout << "a is greater than b";
    }
    else
    {
        cout << "b is greater than a";
    }
    return 0;
}