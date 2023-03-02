#include <iostream>

using namespace std;

int main()
{
    int t, n, i, sum;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n;
        sum = 0;
        while (n)
        {
            sum = sum + n%10;
            n = n/10;
        }
        cout << sum << endl;
    }
    return 0;
}
