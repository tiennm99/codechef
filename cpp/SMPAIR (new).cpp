#include <iostream>
#include <climits>

using namespace std;

int main()
{
    long long t, n, min1, min2, temp;
    cin >> t;
    while (t--) {
        cin >> n;
        min1 = INT_MAX;
        min2 = INT_MAX;
        for (long long i = 0; i < n; ++i) {
            cin >> temp;
            if (temp < min1) {
                min2 = min1;
                min1 = temp;
            } else if (temp < min2) {
                min2 = temp;
            }
        }
        cout << min1 + min2 << endl;
    }
    return 0;
}
