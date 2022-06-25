#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

int main(){
    lli t;

    cin>>t;

    while(t--) {
        string str, vow = "aeiou";
        cin>>str;
        lli i, vowC = 0, count = 0, maxVowCount = 0;
        if(str.length() < 5){
            cout<<count<<"\n";
            continue;
        }
        for(i = 0;i<=str.length()-1;i++){
            if(str[i] == vow[vowC]){
                if(str[i+1] == vow[vowC+1]){
                    if(vow[vowC] != 'u'){
                        vowC++;
                    }
                }
                count++;
            } else{
                if(maxVowCount <= count) {
                    maxVowCount = count;
                }
                vowC = 0;
                count = 0;
            }
        }
        cout<<maxVowCount<<"\n";
    }

    return 0;
}

// aeiaaioaaaaeiiiiouuuooaauuaeiu