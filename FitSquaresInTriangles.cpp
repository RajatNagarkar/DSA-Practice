#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

lli numSquares(lli n){
    if(n<=3){
        return 0;
    }
    return numSquares(n/2-1) + numSquares(n-2);
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    lli t;

    cin>>t;

    while(t--) {
        lli n;
        cin>>n;
        n%2 ? n--: n;
        cout<<numSquares(n)<<"\n";
    }

    return 0;
}
/*
    Another Approach
    base = base/2;
    numSquare = ((n-2)*n)/2
*/