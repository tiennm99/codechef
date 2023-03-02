#include <iostream>

using namespace std;

int main()
{
    int t;
    long long n, k, m;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        m = 0;
        for (long long i = 1; i <= k; ++i)
            if (n % i > m)
                m = n % i;
        cout << m << endl;
    }
    return 0;
}
