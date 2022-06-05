#include<iostream>
using namespace std;
int maxim(int a=0,int b=0, int c=0)
{
   return a>b && a>c ? a:(b>c ? b:c);
}

int main()
{
    cout << maxim(1,2,13)<<endl;
    return 0;
}
