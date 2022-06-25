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
        string str, patt;
        cin>>str>>patt;
        lli i;
        map<char, lli> pattMap, strMap;
        for(i = 0;i<patt.length();i++){
            pattMap[patt[i]] = 1;
        }
        for(i = 0;i<str.length();i++){
            strMap[str[i]] += 1;
            if(pattMap.find(str[i]) == pattMap.end()){
                pattMap[str[i]] = 1;
            } else {
                if(strMap[str[i]] == 1){
                    cout<<i<<"\n";
                    break;
                }
                // cout<<str[i]<<"|"<<pattMap[str[i]]<<endl;
            }
        }
        if(i == str.length()){
            cout<<"-1\n";
        }
    }

    return 0;
}