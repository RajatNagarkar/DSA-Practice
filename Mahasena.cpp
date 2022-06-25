#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    typedef long long int lli;

    lli t, odd=0, eve=0;

    cin>>t;

    while(t--) {
        lli n;
        cin>>n;
        n%2 ? odd++ : eve++;
    }
    eve > odd ? cout<<"READY FOR BATTLE\n" : cout<<"NOT READY\n";

    return 0;
}