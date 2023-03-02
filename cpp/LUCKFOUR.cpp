#include <iostream>

using namespace std;

int main()
{
    int t, i, n, sum;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n;
        sum = 0;
        while (n)
        {
            if (n%10 == 4)
            {
                sum++;
            }
            n = n/10;
        }
        cout << sum << endl;
    }
}
