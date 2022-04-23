#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

vector<vector<int> > main()
{
    vector<vector<int> > ans;
    int n;
    cout << "Enter size of array.." << endl;

    cin >> n;
    int arr[n];
    cout << "Enter items.." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) == 5)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
                
            }
        }
    }
    cout << "sum is...."+ans;

    return ans;
}