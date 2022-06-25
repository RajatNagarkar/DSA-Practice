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
        lli q, p;
        cin>>q>>p;
        double bill = q > 1000 ? (q*p)*0.9 : q*p;
        printf("%lf", bill);
    }

    return 0;
}