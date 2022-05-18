#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int arr[4] = {2, 1, 3, 4};
    int count = 0;
    int n = 4;
    int temp[n];
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }

    if (arr[n - 1] > arr[0])
    {
        count++;
    }
    bool is = count <= 1;
    cout << "ans is .. " << is;

    return 0;
}
