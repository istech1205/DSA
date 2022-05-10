#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int arr[5] = {2, 3, 4, 5, 6};
    int k = 2;
    int n = 5;
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        int m = (i + k) % n;
        temp[m] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << temp[i];
    }

    return 0;
}
