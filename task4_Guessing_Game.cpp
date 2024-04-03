#include <iostream>
using namespace std;
int main()
{
    int n;
    int x = 21, count = 0;

    cout << "Guess a number between 1-100";
    for (int i = 1; i <= 10; i++)
    {
        cin >> n;
        count = i;

        if (n < x)
        {
            cout << "greater number";
        }
        else if (n > x)
        {
            cout << "smaller number";
        }

        else
        {
            cout << "Correct!";
        }

        if (n == x)
            break;
    }
    cout << endl
         << "You took " << count << " attempt";
    return 0;
}
