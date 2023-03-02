#include <iostream>

using namespace std;

int main()
{
    int t, n, i, s;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        s = 0;
        cin >> n;
        while (n)
        {
            s = s*10 + n%10;
            n = n/10;
        }
        cout << s << endl;
    }
    return 0;
}
