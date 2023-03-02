#include <iostream>

using namespace std;

int main()
{
    int x;
    float y;
    cin >> x >> y;
    if (x%5 == 0 && (y - x) > 0.5)
    {
        cout << y - (x + 0.5) << endl;
    }
    else
    {
        cout << y << endl;
    }
    return 0;
}
