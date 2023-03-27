//							     *۝ॐ..जय श्री राम..ॐ۝
#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int t, j = 0, n = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        j = 0;
        n = 0;
        int d, q = 0;
        cin >> d;
        
        int day[50000] = {0};
        int day1[50000] = {0};
        int ans[50000] = {0};
        int a[50000] = {0};
       

        for (int i = 0; i < d; i++)
        {
            n = 0;
            cin >> n;
            day[i] = n;
            n = n + j;
            day1[i] = n;
            for (j; j < n; j++)
            {
                cin >> a[j];
            }
        }

        int h = 0;
        for (int i = 0; i < d; i++)
        {
            int temp = 0;
            int j = 0;
            for (j = 0, h; j < day[i]; j++, h++)
            {
                int count = 0;
                if (day1[i] < n)
                {
                    for (int k = day1[i]; k < n; k++)
                    {
                        if (a[h] == a[k])
                        {
                            count++;
                        }
                    }
                    if (count == 0)
                    {
                        ans[i] = a[h];
                        temp++;
                        h = day1[i];
                        break;
                    }
                }
                else{
                    ans[i]=a[h];
                    temp++;
                    break;
                }
            }
            if (temp == 0)
            {
                q = -1;
                break;
            }
        }
        if (q == -1)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = 0; i < d; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}