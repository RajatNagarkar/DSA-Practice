#include<bits/stdc++.h>

using namespace std;

int main(){
    typedef long long int lli;

    lli n, sum = 0;

    cin>>n;

    char prev = 'x';
    while(n--) {
        lli arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];

        map<int, char> trans;
        trans[arr[0]] = 'p';
        trans[arr[1]] = 's';
        trans[arr[2]] = 'h';

        sort(arr, arr+3);

        if(prev == trans[arr[0]]){
            sum += arr[1];
            prev = trans[arr[1]];
        } else {
            sum += arr[0];
            prev = trans[arr[0]];
        }
    }
    cout<<sum<<"\n";

    return 0;
}