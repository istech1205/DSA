#include <iostream>
#include <math.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // key is greater than mid then go to right part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
// 629401574567
int main()
{
    int even[7] = {4, 5, 6, 7, 0, 1, 2};

    int evenIndex = binarySearch(even, 7, 0);
    cout << "evenIndex of 0 is " << evenIndex << endl;

    return 0;
}