#include <iostream>
using namespace std;

int main()
{
    int n,m=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int arr1[a];
        for (int i = 0; i < a; i++)
        {

            cin >> arr1[i];
        }
        
    for(int i=0,j=i+1;j<a;i++){
        if(arr1[i]>=arr1[j]){
            arr[m]=-1;
            break;
        }
        m++;
    }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==(-1)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}