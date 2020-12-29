#include<bits/stdc++.h>
using namespace std;

int main()
{
    int pos[100005];
    int a;
    int test, n;
    cin>>test;
    while(test--){
        cin>>n;
        for(int i = 1; i <= n; i++){
            cin>>a;
            pos[a] = i;
        }
        bool temp = false;
        for(int i = 1; i <= (n-1); i++){
            //if(i != n) cout<<pos[i]<<" "<<pos[i+1]<<endl;
            if(i != n && ((pos[i] + 1 == pos[i+1]) || (pos[i] > pos[i+1]))){

            }
            else{
                temp = true;
                break;
            }
        }
        if(temp) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}
