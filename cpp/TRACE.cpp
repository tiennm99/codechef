#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned short t;
    cin >> t;
    while (t--)
    {
        unsigned short n;
        cin >> n;
        unsigned short **a = new unsigned short*[n];
        for (unsigned short i = 0; i < n; i++)
        {
            a[i] = new unsigned short[n];
        }
        for (unsigned short i = 0; i < n; i++)
        {
            for (unsigned short j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int max = 0;
        for (unsigned short i = 0; i < n; i++)
        {
            max += a[i][i];
        }
        for (unsigned short i = 0; i < n; i++)
        {
            int t = 0;
            for (unsigned short j = 0; j < n - i; j++)
            {
                t += a[0 + j][i + j];
            }
            if (t > max)
            {
                max = t;
            }
        }
        for (unsigned short i = 0; i < n; i++)
        {
            int t = 0;
            for (unsigned short j = 0; j < n - i; j++)
            {
                t += a[i + j][0 + j];
            }
            if (t > max)
            {
                max = t;
            }
        }
        /*
        for (unsigned short i = 0; i < n; i++)
        {
            for (unsigned short j = 0; j < n; j++)
            {
                if (i != 0 && j != 0)
                {
                    break;
                }
                for (unsigned short k = 1; k <= n - ((i > j)?i:j); k++)
                {
                    int temp = 0;
                    for (unsigned short l = 0; l < k; l++)
                    {
                        temp += a[i + l][j + l];
                    }
                    if (temp > max)
                    {
                        max = temp;
                    }
                    cout << temp << endl;
                }
            }
        }
        */
        cout << max << endl;
        delete[] a;
    }
    return 0;
}
