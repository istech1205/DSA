#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b;
    
    cout << " Enter two numbers which you want to get as AND" << endl;
    cin >> a;
    cin >> b;

    cout << " a&b : " << (a&b) << endl;
    cout << " a|b : " << (a|b)<< endl;
    cout << " ~a : " << ~a << endl;
    cout << " a^b : " << (a^b) << endl;
    return 0;
}