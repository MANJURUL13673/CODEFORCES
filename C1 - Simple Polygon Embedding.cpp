#include<bits/stdc++.h>
using namespace std;

#define PI 3.14159265
int main()
{
    int test;
    cin>>test;
    double a, ans;
    while(test--){
        cin>>a;
        ans = ((2*a) / (4 * tan((PI / (2*a))))) / (a/2);
        cout<<fixed<<setprecision(7)<<ans<<endl;
    }
    return 0;
}
