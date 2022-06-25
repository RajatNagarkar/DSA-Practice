#include<bits/stdc++.h>

using namespace std;

int main(){
    typedef long long int lli;

    lli i, j, n = 100000;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    prime[0] = false;
    prime[1] = false;
    for(i = 2;i*i <= n;i++){
        if(prime[i] ==  true){
            for(j = i * i; j <= n; j += i){
                prime[j] = false;
            }
        }
    }
    cin>>n;
    lli arr[n+1], temp = 0, count = 0;

    for(i = 1;i<=n;i++){
        cin>>arr[i];
        if(prime[i] == true){
            if(temp < arr[i]){
                count++;
                temp = arr[i];
            }
        }
    }
    cout<<count<<" ";
    return 0;
}