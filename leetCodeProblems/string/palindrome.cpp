#include <iostream>
using namespace std;

string reverse(string name, int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name.at(s++), name.at(e--));
    }
    return name;
}

int main()
{

    cout << "Enter a string to check its palindrome or not" << endl;
    string str;
    cin >> str;
    cout << "your string is : " << str << endl;

    int len = str.length();
    int s = 0;
    int e = len - 1;
    string reversed = reverse(str, len);
    cout << "reversed string is : " << reversed << endl;
    if (str != reversed)
    {
        cout << "its not palindrome" << endl;
    }
    else
    {
        cout << "its  palindrome" << endl;
    }

    return 0;
}