#include <iostream>
using namespace std;


int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
   
   
    char name[20];
    cout << "enter your name" << endl;
    cin >> name;
    cout << "your name is ";
    cout << name << endl;
    int length = getLength(name);
    cout << "your length is " << length;
    
    return 0;
}