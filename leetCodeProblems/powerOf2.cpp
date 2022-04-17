#include <iostream>
#include <math.h>
using namespace std;

bool main()
{

    int n;
    cout << " Enter any number to get complement ..." << endl;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            return true;
        }
    }

    return false;


}