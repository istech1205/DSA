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

int main()
{
    int key = 9;
    int arr[6] = {2, 5, 7, 8, 9, 15};

    int index = binarySearch(arr, 6, key);
    cout << "index of " << key << " is " << index << endl;
}
