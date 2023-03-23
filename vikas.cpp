#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n],a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]>> b[i] >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>a[i] && arr[i]>b[i]){
            cout<<"+"<<endl;
        }
        else{
            cout<<"-"<<endl;
        }
    }
    return 0;
}