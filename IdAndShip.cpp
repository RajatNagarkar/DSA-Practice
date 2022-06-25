#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    typedef long long int lli;
    unordered_map<char, string> ulist;
    ulist['B'] = "BattleShip\n";
    ulist['C'] = "Cruiser\n";
    ulist['D'] = "Destroyer\n";
    ulist['F'] = "Frigate\n";
    lli t;

    cin>>t;

    while(t--) {
        char ch;
        cin>>ch;
        cout<<ulist[toupper(ch)];
    }

    return 0;
}