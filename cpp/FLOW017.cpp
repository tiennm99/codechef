#include <iostream>

using namespace std;

int max2(int a, int b, int c)
{
    if (a > b)
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            if (c > a)
            {
                return a;
            }
            else
            {
                return c;
            }
        }
    }
    else
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            if (b > c)
            {
                return c;
            }
            else
            {
                return b;
            }
        }
    }
}
int main()
{
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        cout << max2(a, b, c) << endl;
    }
    return 0;
}
