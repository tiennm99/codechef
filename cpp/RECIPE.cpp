#include <iostream>

using namespace std;

void process(int n);
int gcd(int x, int y);

void process(int n)
{
    int i, g, a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    g = gcd(a[0], a[1]);
    for (i = 2; i < n; i++)
    {
        g = gcd(g, a[i]);
    }
    for (i = 0; i < n; i++)
    {
        a[i] /= g;
        cout << a[i] << " ";
    }
    cout << endl;
}

int gcd(int x, int y)
{
    if (y > x)
    {
        return gcd(y, x);
    }
    else
    {
        if (x%y == 0)
        {
            return y;
        }
        else
        {
            return gcd(y, x%y);
        }
    }
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        process(n);
    }
    return 0;
}
