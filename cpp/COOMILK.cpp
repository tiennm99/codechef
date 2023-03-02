#include <iostream>

using namespace std;

bool kiem_tra(int n)
{
    string s[50];
    int i;
    bool b = 1;
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (i = 0; i < n; i++)
    {
        if (s[i] == "cookie" && (i == (n - 1) || s[i + 1] == "cookie"))
        {
            b = 0;
            break;
        }
    }
    return b;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (kiem_tra(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
