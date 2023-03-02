#include <iostream>

using namespace std;

int main()
{
    int t, a, b, c, i;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if (a + b + c == 180 && a > 0 && b > 0 && c > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
