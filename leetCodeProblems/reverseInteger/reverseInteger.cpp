#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 0;
    int ans=0;
    cout << " Enter any number to reverse ..." << endl;
    cin >> n;

    while (n != 0)
    {
        int digit = n % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << " ans is .." << ans << endl;
    return 0;
}
