#include<iostream>
using namespace std;
int main(){
    int A[2][3]={{2,4,6},{3,6,9}};//2d Array declaration and initialisation
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
    }
         cout<<endl;
    }

}