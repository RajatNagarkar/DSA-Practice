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
        lli n, i, oc = 0, ec = 0;
        cin>>n;
        lli ele;
        lli ocn = (n/2) + (n%2);
        lli ecn = n/2;
        for(i = 0;i<n;i++){
            cin>>ele;
            ele % 2 ? oc++ : ec++;
        }
        lli x = 0;
        if((ec - ocn) > 0)
            x = ec - ocn;
        if((oc - ecn) > 0)
            x = oc - ecn;
        cout<<n-x<<"\n";
    }

    return 0;
}