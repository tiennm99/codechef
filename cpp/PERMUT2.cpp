#include <iostream>

using namespace std;

bool check(int n)
{
    int a[n], i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[a[i] - 1] != i + 1)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    do
    {
        cin >> n;
        if (n)
        {
            if (check(n))
            {
                cout << "ambiguous" << endl;
            }
            else
            {
                cout << "not ambiguous" << endl;
            }
        }
    } while (n);
    return 0;
}
