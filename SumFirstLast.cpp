#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int64_t fact(int64_t num){
    if(num<=1)
        return 1;
    return num * fact(num-1);
}
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    

    lli t;

    cin>>t;

    while(t--) {
        lli  num;
        cin>>num;
        cout<<fact(num)<<"\n";
    }

    return 0;
}