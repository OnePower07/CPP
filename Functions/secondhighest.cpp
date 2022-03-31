#include<iostream>
using namespace std;
int maxim(int a=0,int b=0, int c=0)
{
    if(a > b && a > c)
    {
        if(b>c)
            return b;
        else
            return c;
    }
    else if(b > a && b > c)
    {
        if(a>c)
            return a;
        else
            return c;
    }
    else
    {
        if(a>b)
            return a;
        else
            return b;
    }

}
int main()
{
    cout << maxim(10,2,13)<<endl;
    return 0;
}

