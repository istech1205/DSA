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
    cout << "Enter your target..." << endl;
    int target;
    cin>>target;

    for (int i = 0; i < n; i++)
    {
       if (arr[i]+arr[i+1]==target)
       {
           /* code */
       }
       
    }
    

    return 0;
}