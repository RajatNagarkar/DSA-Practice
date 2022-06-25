#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    typedef long long int lli;

    lli t;

    cin>>t;

    finish:while(t--) {
        lli arr[3], d, e;
        cin>>arr[0]>>arr[1]>>arr[2]>>d>>e;

        sort(arr, arr+3);

        if(e >= arr[2]){
            if(arr[0] + arr[1] <= d){
                cout<<"YES\n";
                goto finish;
            }
        }
        if(e >= arr[1]){
            if(arr[0] + arr[2] <= d){
                cout<<"YES\n";
                goto finish;
            }
        }
        if(e >= arr[0]){
            if(arr[1] + arr[2] <= d){
                cout<<"YES\n";
                goto finish;
            }
        }
        cout<<"NO\n";
        
    }

    return 0;
}