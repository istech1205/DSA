#include <iostream>
#include <math.h>
using namespace std;

int main()
{
     int arr[6] = {6, 5, 4, 3, 2, 1};

     int n = 6;
     for (int i = 1; i < n; i++)
     {

          int temp = arr[i]; //5
          int j = i - 1; //0
          for (; j >= 0; j--)
          {
               if (arr[j] > temp) //6 >5
               {
                    // shift
                    arr[j + 1] = arr[j]; //arr[0+1]=arr[1]=arr[0] 
               }
               else
               { // ruk jao
                    break;
               }
          }
          arr[j + 1] = temp; //arrr[1]=5
     }
     for (int i = 0; i < n; i++)
     {
          cout << arr[i];
     }

     return 0;
}