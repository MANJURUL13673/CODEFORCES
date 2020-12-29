#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[2*100005];
    int test, n,k;
    cin>>test;
    while(test--){
        cin>>n>>k;
        int cum[n+4];
        memset(cum,0,sizeof(cum));
        for(int i = 1; i <= n; i++){
            cin>>arr[i];
        }
        long long int ma = 0, pos = 0;
        cum[1] = 0;
        for(int i = 2; i < (k); i++){
            if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]){
                cum[i] = cum[i-1] + 1;
            }
            else cum[i] = cum[i-1];
        }
        ma = cum[k-1];
        pos = 1;
        for(int i = k; i < n; i++){
            if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]){
                cum[i] = cum[i-1] + 1;
            }
            else cum[i] = cum[i-1];
            int val = cum[i] - cum[i-k+2];
            //cout<<val<<endl;
            if(val > ma){
                ma = val;
                pos = i - k + 2;
            }
        }
        cout<<ma+1<<" "<<pos<<endl;
    }
    return 0;
}
