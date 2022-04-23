#include <iostream>
#include <math.h>
using namespace std;

int getSqrt(int n)
{
    int start = 0;
    int end = n;

    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter any number..." << endl;
    cin >> n;
    int tempSol = getSqrt(n);
   
    cout << " sqrt of " << n << " is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}