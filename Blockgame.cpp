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
        lli num, rev = 0, i, rem, temp;
        cin>>num;
        temp = num;
        while(num){
            rem = num % 10;
            num /= 10;
            rev = rem + (rev * 10);
        }
        rev == temp ? cout<<"wins\n" : cout<<"loses\n";
    }

    return 0;
}