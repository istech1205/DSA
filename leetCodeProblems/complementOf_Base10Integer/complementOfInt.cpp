#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n = 0;

    cout << " Enter any number to get complement ..." << endl;
    cin >> n;

    if (n == 0)
    {
        return 1;
    }
    int value = n;
    int bits = 0;
    while (value > 0)
    {
        bits++;
        value = value >> 1;
    }

    int max = pow(2, bits) - 1;
    int ans = n ^ max;
    cout << " ans is ..."<<ans << endl;
    return ans;
}