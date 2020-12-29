#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    string ch;
    while(test--){
        cin>>ch;
        int one = -1, two = -1, three = -1;
        int siz = 100000000;
        for(int i = 0; i < ch.length(); i++){
            if(ch[i] == '1'){
                one = i;
            }
            else if(ch[i] == '2'){
                two = i;
            }
            else{
                three = i;
            }
            if(one != -1 && two != -1 && three != -1){
                siz= min(siz , i - min(one,min(two,three)) + 1);
            }
        }
        if(siz == 100000000){
            cout<<0<<endl;
        }
        else{
            cout<<siz<<endl;
        }
    }
    return 0;
}
