#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long n, k, i, count = 0;
    unsigned long long a;
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        if (a%k == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
