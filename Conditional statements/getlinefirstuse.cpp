#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"May i know your name?"<<endl;
    getline(cin,name);

    cout<<"Welcome Mr./Mrs. "<<name;

    return 0;

}