#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, h, s, i;    
    cin>>n>>h>>s;
    int arr[n];
    for(i = 0;i<n;i++){
        cin>>arr[i];
    }//Input ends here

    int count = 0;
    for(i = 0;i<n;i++){
        if(arr[i]<=h){
            if(arr[i]%h == 0 || arr[i] < h){
                count++;
                continue;
            }
        }
        int hr = arr[i] + ((arr[i]/h) * s);

        count += hr/h;
        if(hr % h != 0){
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}