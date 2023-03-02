#include <iostream>

using namespace std;

int main()
{
    int t, g;
    float h, cc, ts;
    bool i, ii, iii;
    cin >> t;
    while (t--)
    {
        cin >> h >> cc >> ts;
        if (h > 50)
        {
            i = 1;
        }
        else
        {
            i = 0;
        }
        if (cc < 0.7)
        {
            ii = 1;
        }
        else
        {
            ii = 0;
        }
        if (ts > 5600)
        {
            iii = 1;
        }
        else
        {
            iii = 0;
        }
        if (i && ii && iii)
        {
            g = 10;
        }
        else
        {
            if (i && ii)
            {
                g = 9;
            }
            else
            {
                if (ii && iii)
                {
                    g = 8;
                }
                else
                {
                    if (i && iii)
                    {
                        g = 7;
                    }
                    else
                    {
                        if (i || ii || iii)
                        {
                            g = 6;
                        }
                        else
                        {
                            g = 5;
                        }
                    }
                }
            }
        }
        cout << g << endl;
    }
    return 0;
}
