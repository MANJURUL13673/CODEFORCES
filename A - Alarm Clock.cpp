#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    long long int a, b, c, d;
    while(test--){
        cin>>a>>b>>c>>d;
        if(a <= b){
            cout<<b<<endl;
            continue;
        }
        if(a > b && c > d){
            cout<<b+(long long int)(ceil((a-b)/((c-d)*1.0))) * c<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
