#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {9, 6, 4, 2, 3, 5, 7, 0, 1};

    int n = 9;
    sort(arr[0], arr[n - 1]);

    int ans = n;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i)
        {
            ans = i;
            break;
        }
    }
    cout << "that missing num is : " << ans;

    return 0;
}