#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t, i;
    double q, p, sum;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> q >> p;
        sum = q*p;
        if (q > 1000)
        {
            sum = sum*9/10;
        }
        cout << fixed << sum << endl;
    }
    return 0;
}
