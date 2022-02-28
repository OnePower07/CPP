#include<iostream>
using namespace std;
int main(){
    int *p=new int [20]; //pointer p is pointing on the array of size 20
    delete []p; //above declared array is of no use now.
    p=new int[30];
    return 0;
}