#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[100];
    int t, i, l, dem_0, dem_1;
    cin >> t;
    while (t--)
    {
        cin >> s;
        dem_0 = dem_1 = i = 0;
        l = strlen(s);
        for (i = 0; i < l; i++)
        {
            if (s[i] == '0')
            {
                dem_0++;
            }
        }
        dem_1 = l - dem_0;
        if (dem_1 > dem_0)
        {
            cout << "WIN" << endl;
        }
        else
        {
            cout << "LOSE" << endl;
        }
    }
    return 0;
}
