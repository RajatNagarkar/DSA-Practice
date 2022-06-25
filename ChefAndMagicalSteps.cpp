#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    lli limit = 10000000, i, j;
    bool sieve[limit];
    memset(sieve, false, sizeof(sieve));
    if (limit > 2)
        sieve[2] = true;
    if (limit > 3)
        sieve[3] = true;
 

    for (int x = 1; x * x < limit; x++) {
        for (int y = 1; y * y < limit; y++) {
             
            // Main part of Sieve of Atkin
            int n = (4 * x * x) + (y * y);
            if (n <= limit && (n % 12 == 1 || n % 12 == 5))
                sieve[n] ^= true;
 
            n = (3 * x * x) + (y * y);
            if (n <= limit && n % 12 == 7)
                sieve[n] ^= true;
 
            n = (3 * x * x) - (y * y);
            if (x > y && n <= limit && n % 12 == 11)
                sieve[n] ^= true;
        }
    }
 
    // Mark all multiples of squares as non-prime
    for (int r = 5; r * r < limit; r++) {
        if (sieve[r]) {
            for (int i = r * r; i < limit; i += r * r)
                sieve[i] = false;
        }
    }
    lli t;
    cin>>t;
    while(t--) {
        lli x, y, count = 0;
        cin>>x>>y;
        
        while(x < y){
            if(sieve[x+2] == true){
                x += 2;
            } else {
                x++;
            }
            count++;
        }
        cout<<count<<"\n";
    }
	return 0;
}
