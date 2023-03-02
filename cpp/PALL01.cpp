#include <iostream>

using namespace std;

bool check(int n)
{
    int a[5];
    int size = 0;
    int t = n;
    while (t != 0)
    {
        a[size] = t%10;
        t /= 10;
        size++;
    }
    for (int i = 0; i < size/2; i++)
    {
        if (a[i] != a[size - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (check(n))
        {
            cout << "wins" << endl;
        }
        else
        {
            cout << "losses" << endl;
        }
    }
    return 0;
}
