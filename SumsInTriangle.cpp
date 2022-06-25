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
        lli n, i, ind = 0, j, sum = 0;
        cin>>n;
        lli arr[n];
        for(i = 0;i < ind;i++){
            cin>>arr[i];
        }
        for(j = 0;j<ind; j++){
            if(j == 0){
                sum += arr[0];
            } else {
                if(arr[j] < arr[j+1]){
                    sum += arr[j+1];
                }
            }
        }
    }

    return 0;
}