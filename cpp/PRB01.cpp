#include <iostream>

#define MAX_SIZE 100000

using namespace std;

int main()
{
    bool prime[MAX_SIZE];
    prime[0] = prime[1] = 0;
    for (int i = 2; i < MAX_SIZE; i++)
    {
        prime[i] = 1;
    }
    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (prime[i])
        {
            for (int j = 2*i; j < MAX_SIZE; j += i)
            {
                prime[j] = 0;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (prime[n])
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
