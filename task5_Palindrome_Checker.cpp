#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char string1[20];
    int i, length;
    int temp = 0;

    cout << "enter a string";
    cin >> string1;

    length = strlen(string1);

    for (i = 0; i < length; i++)
    {
        if (string1[i] != string1[length - i - 1])
        {
            temp = 1;
            break;
        }
    }

    if (temp)
    {
        cout << string1 << " is not a palindrome";
    }
    else
    {
        cout << string1 << " is a palindrome";
    }
    return 0;
}
