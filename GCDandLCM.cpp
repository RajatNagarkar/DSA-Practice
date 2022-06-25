#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;


int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    lli t;

    cin>>t;

    while(t--) {
        lli a, b;
        cin>>a>>b;
        lli gcd = __gcd(a, b);
        cout<<gcd<<" "<<a * b / gcd<<"\n";
    }

    return 0;
}