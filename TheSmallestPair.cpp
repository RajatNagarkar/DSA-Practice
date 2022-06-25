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
        lli n, i;
        cin>>n;
        lli arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        cout<<arr[0]+arr[1]<<"\n";
        
    }

    return 0;
}