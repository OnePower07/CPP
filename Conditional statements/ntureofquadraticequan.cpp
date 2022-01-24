#include <iostream>
using namespace std;
int main()
{
    int d, a, b, c;
    cout << "Enter the values of b,a and c:" << endl;
    cin >> b >> a >> c;
    d = b * b - 4 * a * c;
    if (d < 0)
    {
        cout << "no real roots" << endl;
    }
    else
    {
        cout << "roots are real and different" << endl;
    }
    return 0;
}