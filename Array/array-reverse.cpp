#include<iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(a)/sizeof(a[0]);
    int i = 0;
    int j = size - 1;
    int temp;
    while(i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;j--;
    }
    for(int i = 0; i < size; i++)
        cout << a[i] << " ";
    return 0;
}