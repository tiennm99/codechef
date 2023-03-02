#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        int l = s.length();
        for (int i = 0; i < l; i++)
        {
            if (s[i] == '<' && s[i + 1] == '>')
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
