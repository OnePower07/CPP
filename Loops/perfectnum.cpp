#include <iostream>
using namespace std;
int main()
{
    int i, n, sum=0;
    cout << "Enter the number: " << endl;
    cin >> n;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            {
                sum=sum+i;
            } 
    }
    {
        if(n==sum)
        cout<<"Perfect number"<<endl;
        else
        cout<<"Not a perfet number";
    }
    return 0;
}
