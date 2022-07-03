#include<iostream>
#include<list>
using namespace std;

main()
{
    list<int> v={2,4,6,8};
    v.push_back(24);
    v.push_back(36);
    for(int x:v)
    {
        cout<<x<<endl;
    }
}