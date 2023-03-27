//							     *ॐ..जय श्री राम..ॐ*
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, q, sum = 0;
        cin >> n >> q;
        long long int a[n], b[n+1];
        b[0] = 0;
        for (int j = 1; j < n+1; j++)
        {
        
            cin >> a[j-1];
            b[j] = b[j-1]+a[j-1];
          
        }
       
       
        long long int x, y, z;
        for (int j = 0; j < q; j++)
        {
            int temp = 0;
            cin >> x >> y >> z;

            temp = b[n] - (b[y ] - b[x-1]) + ((y - x + 1) * z);
            if (temp % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }

        //     if (sum % 2 == 0)
        //     {
        //        long long int temp = 0;
        //         for (int j = x - 1; j <= y - 1; j++)
        //         {
        //             temp += (a[j] - z);
        //         }
        //        temp%2==0?cout << "NO" << endl:cout << "YES" << endl;
        //     }
        //     else
        //     {
        //        long long int temp = 0;
        //         for (int j = x - 1; j <= y - 1; j++)
        //         {
        //             temp += (a[j] - z);
        //         }
        //       temp%2!=0?cout << "NO" << endl:cout << "YES" << endl;
        //     }
         }
    }
    return 0;
}
