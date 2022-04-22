#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array.." << endl;
    cin >> n;
    cout << "Enter items for array.." << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter any element from array..." << endl;
    int k;
    cin >> k;
    if (n == 0 || (k <= 0))
    {
        cout << "errr" << endl;
    }
    int newSize = n - (k + 1);
    int newArr[n];
    for (int i = k + 1; i < n; i++)
    {
        newArr[i] = arr[i];
        // cout << newArr[i];
    }
    for (int i = 0; i < k; i++)
    {
        newArr[newSize-1] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {

        cout << newArr[i];
    }
    return 0;
}
