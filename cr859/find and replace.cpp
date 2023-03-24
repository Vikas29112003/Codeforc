#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;
    int a[n];
    for (int x = 0; x < n; x++)
    {
        a[x] = 0;
        int k;
        cin >> k;
        char s[k];
        scanf("%s%*c", s);

        for (int i = 0; i < k-1; i++)
        {
            if (k == 1)
            {

                break;
            }
            else
            {
                for (int j = i + 1; j < k; j++)
                {
                    if (s[i] == s[j])
                    {
                        if ((j - i) % 2 != 0)
                        {
                            a[x] = 1;
                            break;
                        }
                    }
                }
            }
            if (a[x] == 1)
            {
                break;
            }
        }
         if (a[x] == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    
    }
    // for (int x = 0; x < n; x++)
    // {
    //     if (a[x] == 1)
    //     {
    //         cout << "NO" << endl;
    //     }
    //     else
    //     {
    //         cout << "YES" << endl;
    //     }
    // }

    return 0;
}