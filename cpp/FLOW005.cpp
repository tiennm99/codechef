#include <iostream>

using namespace std;

int main()
{
    int t, n, i, j, sum, a[6] = {1, 2, 5, 10, 50, 100};
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n;
        sum = 0;
        for (j = 5; j >= 0; j--)
        {
            sum += n/a[j];
            n = n%a[j];
        }
        cout << sum << endl;
    }
    return 0;
}
