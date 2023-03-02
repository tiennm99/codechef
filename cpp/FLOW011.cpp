#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t, i;
    double tlcb, tl, hra, da;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> tlcb;
        if (tlcb < 1500)
        {
            hra = 0.1*tlcb;
            da = 0.9*tlcb;
        }
        else
        {
            hra = 500;
            da = 0.98*tlcb;
        }
        tl = tlcb + hra + da;
        cout << fixed << tl << endl;
    }
    return 0;
}
