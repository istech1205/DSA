#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   // cout << "Enter any number" << endl;
    int n=111111111111111111101;
    int count = 0;
   // cin >> n;

    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << count << endl;
    return 0;
}