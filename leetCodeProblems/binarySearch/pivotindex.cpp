#include <iostream>
#include <math.h>
using namespace std;

int findPivot(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int lsum = 0;
    int rsum = sum;

    for (int i = 0; i < n; i++)
    {
        rsum = rsum - arr[i];

        if (lsum == rsum)

        {
            return i;
        }
        lsum = lsum + arr[i];
    }
    return -1;
}

int main()
{
    int arr[6] = {1, 7, 3, 6, 5, 6};
    int n = 6;

    int index = findPivot(arr, n);
    cout << "pivot index is..." << index << endl;
}