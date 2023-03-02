#include <iostream>

using namespace std;

typedef struct
{
    int t;
    int d;
} internet;

int main()
{
    int tc, i, sum, n, k;
    internet inter[10];
    cin >> tc;
    while (tc--)
    {
        sum = 0;
        cin >> n >> k;
        for (i = 0; i < n; i++)
        {
            cin >> inter[i].t >> inter[i].d;
        }
        i = 0;
        while (k > 0 || i == n)
        {
            if (k > inter[i].t)
            {
                k -= inter[i].t;
                inter[i].t = 0;
            }
            else
            {
                inter[i].t -= k;
                k = 0;
            }
            i++;
        }
        for (i = 0; i < n; i++)
        {
            sum += inter[i].t*inter[i].d;
        }
        cout << sum << endl;
    }
    return 0;
}
