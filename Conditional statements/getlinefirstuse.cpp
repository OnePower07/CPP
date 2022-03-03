#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"May i know your name?"<<endl;
    getline(cin,name);//this will take full name

    cout<<"Welcome Mr./Mrs. "<<name;

    return 0;

}