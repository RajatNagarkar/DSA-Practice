#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

lli sumN(lli d, lli n){
    if(d<=0)
        return n;
    return sumN(d-1, n*(n+1)/2);
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    lli t;

    cin>>t;

    while(t--) {
        lli a, b;
        cin>>a>>b;

        cout<<sumN(a, b)<<"\n";
    }

    return 0;
}