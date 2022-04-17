#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Enter any number" << endl;
    int n, sum=0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum is : " << sum << endl;
}