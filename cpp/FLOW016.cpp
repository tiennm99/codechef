#include <iostream>

using namespace std;

unsigned long long int gcd(int a, int b) {
    unsigned long long int temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    unsigned long long int t, a, b, l, g;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        g = gcd(a, b);
        l = a*b/g;
        cout << g << " " << l << endl;
    }
    return 0;
}
