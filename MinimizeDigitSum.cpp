#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    typedef long long int lli;

    lli q;

    cin>>q;

    while(q--) {
        lli n, l, r;
        cin>>n>>l>>r;
        lli min = __INT64_MAX__, i, base;

        for(i = l;i<=r;i++){
            lli num = n, sum = 0;
            while(num > 0){
                sum += num % i;
                num /= i;
            }
            cout<<sum<<" | "<<i<<"\n";
            if(sum<min){
                min = sum;
                base = i;
            }
        }
        cout<<base<<"\n";
    }

    return 0;
}