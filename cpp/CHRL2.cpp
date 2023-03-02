#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char ch;
    int c, h, e, f;
    c = h = e = f = 0;
    do
    {
        ch = getchar();
        if (ch == 'C')
        {
            c++;
        }
        else
        {
            if (ch == 'H' && c > h)
            {
                h++;
            }
            else
            {
                if (ch == 'E' && h > e)
                {
                    e++;
                }
                else
                {
                    if (ch == 'F' && e > f)
                    {
                        f++;
                    }
                }
            }
        }
    } while (ch != '\n');
    cout << f << endl;
    return 0;
}
