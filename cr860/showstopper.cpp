//							     *۝ॐ..जय श्री राम..ॐ۝
#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int a[x];
        int b[x];
        for (int j = 0; j < x; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < x; j++)
        {
            cin >> b[j];
        }
        int t = 0;
        t = a[x - 1];
        a[x - 1] = b[x - 1];
        b[x - 1] = t;
        int count = 0;
        for (int j = 0; j < x-1; j++)
        {
            if (a[j] <= b[x - 1] && b[j] <= a[x - 1])
            {
                int temp = a[j];
                a[j] = b[j];
                b[j] = temp;
                count++;
            }
            else{
                if(a[j] <= a[x-1] && b[j] <= b[x-1]){
                    count++;
                }
                else{
                    count=-1;
                    break;}
            }
        }
        if (count == -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
  
    }
    return 0;
}