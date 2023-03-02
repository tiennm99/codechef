#include <iostream>

using namespace std;

unsigned long long int fact(int n)
{
    unsigned long long int x = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        x *= i;
    }
    return x;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << fact(n) << endl;
    }
    return 0;
}
