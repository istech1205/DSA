#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    for (int count = 0; count < n - 1; count++)
    {
        //for round 1 to n-1
        for (int j = 0; j < n-count-1; j++)
        {
            if (a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main()
{
    int n;
    cout <<"enter size of array..."<<endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubbleSort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}