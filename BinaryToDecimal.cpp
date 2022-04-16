#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter any binary to decimal ..."<<endl;
    cin>>n;

int i=0;
int ans=0;
    while(n !=0){
        int digits =n % 10;
        if(digits== 1){
            ans=ans + pow(2,i);
        }
        n=n/10;
        i++;
    
    }
    cout<<"Ans is :  "<<ans<<endl;

    return 0;
}