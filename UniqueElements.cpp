#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, i;
    cin>>n;
    int no, ans = 0;

    for(i = 0;i<n;i++){
        cin>>no;
        ans = ans ^ no;
    }
    cout<<ans;

    

    return 0;
}