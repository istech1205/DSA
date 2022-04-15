#include <iostream>
using namespace std;


void sort(int a[], int n)
{
    for (int i = 0; i < n-2; i++)
    {
        int smallest=INT_MAX;
        for (int j = 0; j <=n-1; j++)
        {
            if(a[j]<smallest){
                smallest=a[j];
            }
            
        }
        if (a[i] > smallest)
        {
            swap(a[i],smallest);
        }
        
        
    }
    
}

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

   return 0;
}

