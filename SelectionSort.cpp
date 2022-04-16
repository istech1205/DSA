#include <iostream>
using namespace std;


void sort(int a[], int n)
{
  
   for (int i = 0; i < n-2; i++)
   {
       int smallest=i;
       for (int j = i+1; j < n-1; j++)
       {
           if (a[j]<a[smallest])
           {
              smallest=j;
           }
           
       }
       swap(a[i],a[smallest]);
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
    sort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

   return 0;
}

