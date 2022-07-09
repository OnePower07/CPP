#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream infile;
    infile.open("My.txt");
    string str;
    int x;
    infile>>str;
    infile>>x;
    cout<<str<<" "<<x<<endl;
    if(infile.eof())
    {
        cout<<"end of file reached";
    }
    infile.close();
}