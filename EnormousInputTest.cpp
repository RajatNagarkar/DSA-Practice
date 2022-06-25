#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    typedef long long int lli;

    lli n, k, i, num, count = 0;
    cin>>n>>k;

    for(i = 0;i<n;i++){
        cin>>num;
        if(num%k == 0)
            count++;
    }
    cout<<count;
    return 0;
}