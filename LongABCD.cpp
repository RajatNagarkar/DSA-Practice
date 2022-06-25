#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    typedef long long int lli;

    string sen;
    cin>>sen;

    lli i, max = 0, maxInd, tempMax = 0;
    char tempChar = 'a', streak = 'a';
    for(i = 0;i < sen.length()-1;i++){
        // cout<<tempChar;
        if(sen[i] == 'a' && streak == sen[i]){
            tempChar = ++sen[i];
            tempMax++;
        } else if(tempChar == sen[i]) {
            tempChar = ++sen[i];
            tempMax++;
            streak = sen[i];
        } else {
            if(max < tempMax){
                max = tempMax;
                maxInd = i;
                streak = 'a';
            }
            tempMax = 0;
            tempChar = 'a';
        }
        
    }
    cout<<tempMax<<"\n";
    // cout<<max<<" | "<<maxInd<<"\n";
    return 0;
}