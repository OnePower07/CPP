#include <iostream>
using namespace std;
int main()
{
    int fact = 1, i, n;
    cout << "Enter the number you want factorial of: " << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial is: " << fact << endl;//factorial
    return 0;
}