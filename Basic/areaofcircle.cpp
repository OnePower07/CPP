#include <iostream>
using namespace std;
int main()
{
    int r, area;
    cout << "Enter Radius of circle: " << endl;
    cin >> r;//taking radius of circle

    area =(float) 3.14 * r * r;

    cout << "Area of circle is: " << area;

    return 0;
}