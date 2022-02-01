#include <iostream>
using namespace std;
int main()
{
    int A[] = {2, 4, 3, 5, 2};
    int sum = 0;
    for(int i:A)
    //for (int i = 0; i < 5; i++) You can use for loop as well as for each loop as per your comfort.
    {
        sum = sum + i;
    }
    cout << "Sum of elements in array is: "<<sum;
    return 0;
}