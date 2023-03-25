#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long double n, k;
        cin >> n;
        k = sqrt(n);
        if (k == int(k))
        {
            cout << (int(k) - 1) << endl;
        }
        else
        {
            cout << int(k) << endl;
        }
    }
    return 0;
}