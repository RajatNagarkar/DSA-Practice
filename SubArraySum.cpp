#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;

int main(){

    lli t;
    cin>>t;
    while(t--){
        lli n, i;
        cin>>n;
        vector<lli> vec;
        lli temp;
        for(i = 0;i<n;i++) {
            cin>>temp;
            vec.push_back(temp);
        }
        for(i = 1;i<=n;i++){
            for(int j = 0;j<=n;j++){
                vector<lli> v(vec.begin(), vec.begin()+j);
                for(auto i = v.begin();i != v.end();++i){
                    cout<<*i<<" ";
                }
            }
            cout<<"\n";
        }
    }

    return 0;
}