#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        switch (n%8)
        {
        case 0:
            cout << n - 1 << "SL";
            break;
        case 1:
            cout << n + 3 << "LB";
            break;
        case 2:
            cout << n + 3 << "MB";
            break;
        case 3:
            cout << n + 3 << "UB";
            break;
        case 4:
            cout << n - 3 << "LB";
            break;
        case 5:
            cout << n - 3 << "MB";
            break;
        case 6:
            cout << n - 3 << "UB";
            break;
        case 7:
            cout << n + 1 << "SU";
            break;
        }
        cout << endl;
    }
    return 0;
}
