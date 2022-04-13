#include<iostream>
using namespace std;
int test(int a)
{}
float test(double c){} //Overloaded functions may or may not have different return types
                       // but they must have different arguments

//This will throw an error 
// int test(int a){}  
// double test (int b){}