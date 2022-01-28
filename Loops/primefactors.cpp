#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: "<<endl;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (n%i == 0)
        {
            int a=0;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0){
                    a++;
                }
            }
                if(a==0)
            {
                cout <<"Prime factors of the number is: "<< i << endl;
            }
        }
    }   
    return 0;
}