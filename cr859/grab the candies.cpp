#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b = 0, c = 0;
    for (int x = 0; x < n; x++)
    {int b=0,c=0;
        int k;
        cin >> k;
        int arr[k];
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < k; i++)
        {
            if (arr[i] % 2 == 0)
            {
                b = b + arr[i];
            }
            else
            {
                c = c + arr[i];
            }
        }
        if (b > c)
        {
            a[x]=0;
        }
        else
        {
            a[x]=1;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}