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
    long long int t, n, m, x, y, z, count = 0, a[3] = {0};
    cin >> t;
    while (t--)
    {
        cin >> n >> m;

        long long int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
           sort(b, b + n);
           
           for(int p=0;p<m;p++){
        cin >> x >> y >> z;
     
        count = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (4 * x * z > ((y - b[i]) * (y - b[i])))
            {
                cout << "YES" << endl;
                cout << b[i] << endl;
                count++;
                break;
            }
        }
        if(count==0){
            cout<<"NO"<<endl;
        }
           }
    }
    return 0;
}