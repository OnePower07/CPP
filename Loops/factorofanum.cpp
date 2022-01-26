#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter the number to get it's factors: " << endl;
    cin >> n;
    cout << "Factor is: ";
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
       cout<<i<<" ";
    }
    return 0;
}
