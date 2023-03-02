#include <iostream>
#include <cmath>

using namespace std;

typedef struct
{
    double x;
    double y;
} toa_do;

int main()
{
    int t;
    double khoang_cach;
    toa_do chef, head_server, sous_chef;
    cin >> t;
    while (t--)
    {
        cin >> khoang_cach;
        cin >> chef.x >> chef.y;
        cin >> head_server.x >> head_server.y;
        cin >> sous_chef.x >> sous_chef.y;
        if (sqrt(pow(sous_chef.x - chef.x, 2) + pow(sous_chef.y - chef.y, 2)) <= khoang_cach ||
            (sqrt(pow(sous_chef.x - head_server.x, 2) + pow(sous_chef.y - head_server.y, 2)) <= khoang_cach &&
             sqrt(pow(head_server.x - chef.x, 2) + pow(head_server.y - chef.y, 2)) <= khoang_cach))
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
