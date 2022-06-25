#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    typedef long long int lli;

    lli t;

    cin>>t;
    while(t--) {
        lli n, i=0,  dish = 0;
        cin>>n;

        if(n>=2048){
            dish = n / 2048;
            n = n % 2048;
        }
        order:i = 1;
        for(;n>0;){
            i = i<<1;
            if(i == n){
                dish += 1;
                n -= i;
            }
            else if(i>n){
                n -= i>>1;
                dish++;
                if(n <= 0){
                    break;
                }
                goto order;
            }
        }
        cout<<dish<<"\n";
    }

    return 0;
}