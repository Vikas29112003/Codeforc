#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int count = 0,digt=0;
        for (int j = 0; j < 4; j++)
        { digt=0;
            for(int k = 0; k < 4; k++)
            {
                if (s[j] == s[k])
                {
                    digt++;
                  
                }
            }
            if(digt==3 || digt==4)
            {
            
                break;
            }
        }
        if(digt==3){
            cout<<"6"<<endl;
        }
        else if(digt==4){
            cout<<"-1"<<endl;
        }
      
        else{
            cout<<"4"<<endl;
        }
    }

    return 0;
}