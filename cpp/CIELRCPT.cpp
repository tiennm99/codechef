#include <iostream>

using namespace std;

int main()
{
    int t, i, p, a, b;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> p;
        b = 0;
        a = 2048;
        while (a)
        {
            b = b + p/a;
            p = p%a;
            a = a/2;
        }
        cout << b << endl;
    }
    return 0;
}
