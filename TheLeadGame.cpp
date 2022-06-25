#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    typedef long long int lli;

    lli t, p1=0, p2=0, p, lead = 0;

    cin>>t;
    while(t--) {
        lli a, b;
        cin>>a>>b;
        p1 += a;
        p2 += b;
    }
    lead  = abs(p1-p2);
    p = p1>p2 ? 1 : 2;
    cout<<p<<" "<<lead<<"\n";

    return 0;
}