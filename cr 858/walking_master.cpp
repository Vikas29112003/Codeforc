//							     *۝ॐ..जय श्री राम..ॐ۝
#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <string>
// void topright(long long int *a, long long int *b, long long int *c, long long int *d, long long int *count)
// {
//     if (*b < *d)
//     {
//         *b = *b + 1;
//         *a = *a + 1;
//         *count = *count + 1;
//         topright(a, b, c, d, count);
//     }
//     else
//     {
//         return;
//     }
// }
// void left(long long int *a, long long int *c, long long int *temp)
// {
//     if (*a > *c)
//     {
//         *a = *a - 1;

//         *temp=*temp+1;
//         left(a, c, temp);
//     }
//     else if (*a < *c)
//     {
//         *temp = -1;
//         return;
//     }
//     else
//     {
//         return;
//     }
// }

using namespace std;

int main()
{

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b){
            cout<<-1<<endl;
            continue;
        }
        else if((d-b)<(c-a)){
            cout<<-1<<endl;
            continue;
        }
        else{
        
            cout<<d-b+a+d-b-c<<endl;
            continue;
        }
          
        }
    
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     long long int count = 0, a, b, c, d,temp=0;
    //     cin >> a >> b >> c >> d;
    //     if(d<b){
    //         cout<<-1<<endl;
    //         continue;
    //     }
    //     else{
    //     topright(&a, &b, &c, &d, &count);
         
      
        
    //      left(&a, &c, &count);
    //     cout << count << endl;
    //     count=0;
    //     }
    // }
    return 0;
}