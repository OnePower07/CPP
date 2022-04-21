#include<iostream>
using namespace std;
int main()
{
    //int A[5];//This will produce a garbage value
    //int A[5]={2,3};//This will give produce three zeros
    //int A[3]={2,3,4,5};//This will give compile time error(more elements the size)
    int A[]={2,3,4};
    for(int i=0;i<3;i++)
{
    cout<<A[i]<<endl;
}
return 0;
}