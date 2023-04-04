//							     *۝ॐ..जय श्री राम..ॐ۝
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        char str[n];
        cin >> str;
       
        int x = 0;
        char s, t;
         t = str[0];
        for (int i = 1; i < n; i++)
        {
           
            if (t >= str[i])
            {
                t = str[i];
                x = i;
            }
        }
        cout << t;
        for (int i = 0; i < n; i++)
        {
            if (x != i)
            {
                cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}