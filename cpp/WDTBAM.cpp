#include <iostream>

using namespace std;

int main()
{
    int t, n, c;
    long long *a, m;
    string c1, c2;
    cin >> t;
    while (t--) {
        c = 0;
        m = 0;
        cin >> n;
        cin >> c1 >> c2;
        a = new long long[n + 1];
        for (int i = 0; i <= n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i) {
            if (c1[i] == c2[i])
                ++c;
        }
        if (c == n) {
            cout << a[n] << endl;
        } else {
            for (int i = 0; i <= c; ++i) {
                if (a[i] > m)
                    m = a[i];
            }
            cout << m << endl;
        }

        delete [] a;
    }
    return 0;
}
