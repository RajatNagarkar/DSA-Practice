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
        lli n, dis, state, i, disCount = 0, stateCount = 0;
        cin>>n>>dis>>state;

        string travel;
        cin>>travel;
        for(i = 0;i<travel.length();i++){
            if(travel[i] == '0'){
                disCount++;
            } else {
                stateCount++;
            }
        }
        lli time = disCount*dis + stateCount * state;
        cout<<time<<"\n";
    }

    return 0;
}