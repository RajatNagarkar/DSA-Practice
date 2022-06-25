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
        string scores;
        int i, team = 1, scr1 = 0, scr2 = 0;
        cin>>scores;

        for(i = 0;i < scores.length();i++){
            if(i % 2 == 0){
                if(scores[i] == 1){
                    scr1++;
                }
                
            } else if(i % 2 == 1){
                if(scores[i] == 1){
                    scr2++;
                }
            }
        }
    }

    return 0;
}