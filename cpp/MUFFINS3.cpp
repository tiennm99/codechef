#include <iostream>

using namespace std;

int main()
{
    int n, t, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> t;
        cout << t/2 + 1 << endl;
    }
    return 0;
}
