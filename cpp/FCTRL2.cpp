#include <iostream>

#define MAX 1000

using namespace std;

void factorial(int n)
{
    int *a = new int[MAX];
    int size = 0;
    int t = n;
    while (t != 0)
    {
        a[size] = t%10;
        t /= 10;
        size++;
    }
    for (int x = 2; x < n; x++)
    {
        for (int i = 0; i < size; i++)
        {
            a[i] *= x;
        }
        for (int i = 0; i < size - 1; i++)
        {
            a[i + 1] += a[i]/10;
            a[i] %= 10;
        }
        while (a[size - 1] >= 10)
        {
            a[size] = a[size - 1]/10;
            a[size - 1] %= 10;
            size++;
        }
    }
    for (int i = size - 1; i >= 0; i--)
    {
        cout << a[i];
    }
    cout << endl;
    delete[] a;
    a = NULL;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        factorial(n);
    }
    return 0;
}
