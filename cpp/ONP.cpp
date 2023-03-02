#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    int t, l1, l2 = 0, l3 = 0, i, j;
    char s1[400], s2[400], s3[400];
    cin >> t;
    while (t--)
    {
        cin >> s1;
        l1 = strlen(s1);
        for (i = 0; i < l1; i++)
        {
            if (isalpha(s1[i]))
            {
                s3[l3++] = s1[i];
            }
            else
            {
                s2[l2++] = s1[i];
                if (s1[i] == ')')
                {
                    for (j = l2 - 1; s2[j] != '('; j--)
                    {
                        if (s2[j] != ')')
                        {
                            s3[l3++] = s2[j];
                        }
                    }
                    l2 = j;
                }
            }
        }
        for (i = 0; i < l3; i++)
        {
            cout << s3[i];
        }
        cout << endl;
        l2 = 0;
        l3 = 0;
    }
    return 0;
}
