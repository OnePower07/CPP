#include <iostream>
using namespace std;
int main()
{
 int n, i;
 float num[5], sum=0.0, average;
 cout << "Enter the numbers of elements: ";
 cin >> n;
 for(i = 0; i < n; ++i)
 {
 cout << "Enter number: ";
 cin >> num[i];
 sum = sum + num[i];
 }

 average = sum / n;
 cout << "Average = " << average;
 
 return 0;
}