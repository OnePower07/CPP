#include <iostream>  //binary search for searching distint elements of an array.
using namespace std;
int main()
{
    int A[5];
    int l = 0, h = 4, key, n = 5, mid, a = 0;
    cout << "Enter the elements of an Array: "<< " " << endl;
    for (int i = 0; i < n; i++) //This for loop for getting elements from the user
    {
        cin >> A[i];
    }
    cout << "Enter Key: " << endl;
    cin >> key;
    while (l <= h) //This while loop for searching the elements
    {
        mid = (l + h) / 2; //This goes for mid value
        if (key == A[mid])
        { //if find then return the mid value
            cout << "Element found at: " << mid;
            return 0;
        }
        
        else if (key < A[mid])
        { /*otherwise if the key value is then the mid value then search goes for left side 
                               where mid value decreased by 1 */
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "Not found at any index" << endl;
    return 0;
}
