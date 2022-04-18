#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int ans = 0;
    cout << "Enter size of array..." << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= n; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "Unique number is :- " << ans << endl

        return 0;
}