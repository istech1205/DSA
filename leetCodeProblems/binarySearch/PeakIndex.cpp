#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int arr[4] = {0, 2, 1, 0};
    int s = 0;
    int size = 4;
    int e = size - 1;

    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    cout << " ans is " << s << endl;
    return 0;
}