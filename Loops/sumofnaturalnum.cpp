#include <iostream>
using namespace std;
int main()
{
    int n, i=1, sum;
    sum = 0;
    cout << "Enter n: " << endl;
    cin >> n;
    while(i<=n)
    {
       
        sum = sum + i;  
        i++;
    }
     cout << "Sum: " << sum << endl;
    
    return 0;
}