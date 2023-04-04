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
        int a[n], sum = 0, count = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j<256; j++)
        {sum=0;
            for (int q = 0; q < n; q++)
            {
                sum =sum^(j ^ a[q]);

            }
            if (sum == 0)
            {
                ans = j;
                count++;
                break;
            }
        }
        if(count==0){
            cout<<"-1"<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}