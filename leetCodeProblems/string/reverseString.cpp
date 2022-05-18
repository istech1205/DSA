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

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int main()
{
    char name[20];
    cout << "enter your name" << endl;
    cin >> name;
    cout << "your original name is ";
    cout << name << endl;
    int length = getLength(name);
    // reverse string
    reverse(name, length);

    cout << "your reversed name  is " << name;
    return 0;
}