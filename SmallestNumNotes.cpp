#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    typedef long long int lli;

    lli t, deno[6] = {100,50,10,5,2,1};

    cin>>t;

    while(t--) {
        lli n, notes = 0, i = 0;
        cin>>n;
        while(n){
            notes += n / deno[i];
            n = n % deno[i];
            if(deno[i]!=1)
                i++;
        }
        cout<<notes<<endl;
    }

    return 0;
}