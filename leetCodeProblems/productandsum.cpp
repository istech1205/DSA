#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter any number" << endl;

    cin >> n;
    
    int prod=1;
    int sum=0;
    while (n !=0)
    {
        int digit=n % 10;
        prod = prod * digit;
        sum=sum + digit;

        n=n/10;
        
    }
    int ans=prod-sum;
    cout << "ans is " <<ans<< endl;
    return ans;
    

   
}