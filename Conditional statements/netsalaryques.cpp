#include<iostream>
using namespace std;
int main()
{
int basic_sal,percentage_allow,percentage_deduc;
int netSalary;

cout<<"Enter basic salary: "<<endl;
cin>>basic_sal;
cout<<"Enter percentage allowances: "<<endl;
cin>>percentage_allow;
cout<<"Enter percentage deduction: "<<endl;
cin>>percentage_deduc;

netSalary=basic_sal+basic_sal*percentage_allow/100-
basic_sal*percentage_deduc/100;
cout<<"Net Salary: "<<netSalary;

return 0;

}