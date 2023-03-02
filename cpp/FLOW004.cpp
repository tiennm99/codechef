#include <iostream>

using namespace std;

int main()
{
    int t, n, i, fdigit, ldigit;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n;
        ldigit = n%10;
        while (n)
        {
            fdigit = n%10;
            n = n/10;
        }
        cout << fdigit + ldigit << endl;
    }
    return 0;
}
