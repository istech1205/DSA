#include <iostream>
#include <math.h>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e + s) / 2;
    }

    return ans;
}

int main()
{

    int even[5] = {1, 2, 3, 3, 5};
    int firstOccu = firstOcc(even, 5, 3);
    cout << "first occurance of 3 is " << firstOccu << endl;
    return 0;
}