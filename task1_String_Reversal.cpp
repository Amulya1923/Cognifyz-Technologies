#include <iostream>
#include <string.h>
using namespace std;

void revstr(char *str)
{
    int i, len, temp;
    len = strlen(str);

    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main()
{
    char str[50];
    cout << "enter string :- ";
    cin >> str;

    revstr(str);

    cout << "Reversed String : - " << str;

    return 0;
}
