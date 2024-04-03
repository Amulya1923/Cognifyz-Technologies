#include <iostream>
using namespace std;

int main()
{
    int i, n;

    int t1 = 0, t2 = 1;

    int nextTerm = t1 + t2;

    cout << "enter the number of terms";
    cin >> n;

    cout << "Fibonacci Series :" << endl
         << t1 << endl
         << t2 << endl;

    for (i = 3; i <= n; i++)
    {
        cout << nextTerm << endl;
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}
