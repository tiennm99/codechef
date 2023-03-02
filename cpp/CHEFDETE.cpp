#include <iostream>

using namespace std;

void xu_ly(int n)
{
    bool mang[n + 1] = {0}, t, i;
    for (i = 0; i < n; i++)
    {
        cin >> t;
        mang[t] = 1;
    }
    for (i = 1; i <= n; i++)
    {
        if (!mang[i])
        {
            cout << i << " ";
        }
    }
    //cout << '\b';
}

int main()
{
    int n;
    cin >> n;
    xu_ly(n);
    return 0;
}
