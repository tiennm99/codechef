#include <iostream>

using namespace std;

int main() {
    int n,
    a,
            e = 0,
            o = 0;
    cin >> n;
    while (n--) {
        cin >> a;
        if (a%2 == 0)
            ++e;
        else
            ++o;
    }
    if (e > o)
        cout << "READY FOR BATTLE";
    else
        cout << "NOT READY";
    cout << endl;
    return 0;
}