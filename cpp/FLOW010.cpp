#include <iostream>

using namespace std;

int main()
{
    int t, i;
    char c;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> c;
        switch (c)
        {
        case 'b':
        case 'B':
            cout << "BattleShip" << endl;
            break;
        case 'c':
        case 'C':
            cout << "Cruiser" << endl;
            break;
        case 'd':
        case 'D':
            cout << "Destroyer" << endl;
            break;
        case 'f':
        case 'F':
            cout << "Frigate" << endl;
            break;
        }
    }
    return 0;
}
