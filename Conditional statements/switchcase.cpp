#include <iostream>
using namespace std;
int main()
{
    cout << "Menu\n"
         << "1.Addition\n"
         << "2.Substraction\n"
         << "3.Multiply\n"
         << "4.Division\n"
         << endl;
    int option;
    cout << "Enter your choice numbers: " << endl;
    cin >> option;
    int a, b, c;
    cout << "Enter your numbers" << endl;
    cin >> a >> b;
    switch (option)
    {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a - b;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        c = a / b;
        break;
    default:
        cout << "Invalid number" << endl;
    }
    cout<<"c = "<<c<<endl;
    return 0;
}