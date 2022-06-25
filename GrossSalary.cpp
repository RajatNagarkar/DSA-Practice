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
        lli base;
        double salary;
        cin>>base;

        salary = base < 1500 ? base + (base * 0.9) + (base * 0.1) : base + 500 + (base * 0.98);
        printf("%.2f\n", salary);
    }

    return 0;
}