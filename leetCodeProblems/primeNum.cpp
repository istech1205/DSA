#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter any number" << endl;

    cin >> n;

    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n %  i == 0) // if reminder will 0 so not a prime number
        {

            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "Not a Prime Number" << endl;
    }else{
        cout << " a Prime Number" << endl;
    }
}