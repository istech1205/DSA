#include <iostream>
#include <math.h>
using namespace std;

int firstOccurance(int arr[], int n, int key)
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
        mid = s + (e - s) / 2;
    }

    return ans;
}
int lastOccurance(int arr[], int n, int key)
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
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}
int main()
{

    int even[6] = {5,7,7,8,8,10};
    int n=6,key=8;
    int firstOccu = firstOccurance(even, n, key);
    int lastOccu = lastOccurance(even, n, key);

    cout << " first occurance of 3 is at index " << firstOccu << endl;
    cout << " last occurance of 3 is at index " << lastOccu << endl;

    return 0;
}