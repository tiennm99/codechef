#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i, l = 0, w = 0, a, b, c = 0, d = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        c = c + a;
        d = d + b;
        if (abs(c - d) > l)
        {
            l = abs(c - d);
            if (c > d)
            {
                w = 1;
            }
            else
            {
                w = 2;
            }
        }
    }
    cout << w << " " << l << endl;
    return 0;
}
