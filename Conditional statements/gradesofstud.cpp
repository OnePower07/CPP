#include <iostream>
using namespace std;
int main()
{
    int grade;
    cout << "Enter grades of student: " << endl;
    cin >> grade;
    if (grade >= 60)
    {
        cout << "Passed" << endl;
    }
    else if (grade >= 30 && grade <= 60)
    {
        cout << "Need for improvement" << endl;
    }
    else
    {
        cout << "Failed" << endl;
    }
    return 0;
}