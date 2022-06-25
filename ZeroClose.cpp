#include<bits/stdc++.h>

using namespace std;

int main(){

    long int n, i;
    cin>>n;

    long int a[n];

    for(i = 0;i<n;i++){
        cin>>a[n];
    }

    sort(a, a+n);
    
    cout<<a[0]<<endl;
    return 0;
}
