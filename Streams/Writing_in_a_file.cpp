#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile("My.txt");
    outfile<<"Hello"<<endl;
    outfile<<"24";

    outfile.close();
}