//header file
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, b, a, c;
    cout << "Enter Coefficients a b and c : " << endl;
    cin >> a >> b >> c;
    x = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << "Root is: " << x;

    return 0;
}
