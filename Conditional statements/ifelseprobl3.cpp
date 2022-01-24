//A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
//Ask user for quantity
//Suppose, one unit will cost 100.
// print total cost for user.

#include <iostream>
using namespace std;
int main()
{

    int price, quantity;
    
    cout << "Enter the quantity" << endl;
    cin >> quantity;
    price = quantity * 100;
    cout << "Total price for user: " << price << endl;

    if (price > 1000)
    {
        cout << "You will get 10 percent discount";
    }
    else
    {
        cout << "no discount offered" << endl;
    }
    
    return 0;
}