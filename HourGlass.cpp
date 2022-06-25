#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    typedef long long int lli;

    lli a[6][6], i,j, maxSum = INT64_MIN, sum;

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            cin>>a[i][j];
        }
    }

    for(i = 0;i < 4;i++){
        for(j = 0;j < 4;j++){
            sum = a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            maxSum = sum>maxSum ? sum : maxSum;
        }
    }
    cout<<maxSum<<endl;
    return 0;
}