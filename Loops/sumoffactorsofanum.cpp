#include <iostream>
using namespace std;
int main()
{
    int i, n, sum=0;
    cout << "Enter the number to get it's factors: " << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            {
                cout<<"Factor is: "<<i<<endl;
                sum=sum+i;
            }
    }
    cout<<"Sum is: "<<sum;
    //sum of factors
    return 0;
}
