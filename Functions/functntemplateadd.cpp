#include<iostream>
using namespace std;
template <class T>
T add(T x, T y, T z)
{
    return x+y+z;
}

// auto add2(auto a, auto b, auto c)
// {
//     return a+b+c;
// }

int main()
{
    int a=12, b=12, c=22, d;
    cout<<"Sum is: "<<add(a,b,c)<<endl;
    // auto k = add2('a', 'b', 'c');
    // cout << k << endl;
    // cout << typeid(k).name() << endl;
    return 0;
}