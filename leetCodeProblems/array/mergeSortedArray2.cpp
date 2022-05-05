#include <iostream>

#include <math.h>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m)
{
    int i = 0;
    int j = 0;
    int k = (n + m) - 1;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr1[k++] = arr1[i++];
        }
        else
        {
            arr1[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr1[k++] = arr1[i++];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {2, 5, 6};

    merge(arr1, 3, arr2, 3);

    return 0;
}