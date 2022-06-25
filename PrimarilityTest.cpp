#include<bits/stdc++.h>

using namespace std;

int main(){
    
    typedef long long int lli;

    lli i, j, n = 100000;
    bool prime[n+1];
    prime[0] = false;
    prime[1] = false;
    memset(prime, true, sizeof(prime));

    for(i = 2;i*i <= n;i++){
        if(prime[i] ==  true){
            for(j = i * i; j <= n; j += i){
                prime[j] = false;
            }
        }
    }

    lli t;

    cin>>t;

    while(t--) {
        lli n;
        cin>>n;
        
        prime[n] ? cout<<"yes\n" : cout<<"no\n";
    }
    
    return 0;
}