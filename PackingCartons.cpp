#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n, k, i;
    cin>>n>>k;
    vector<int> arr;
    int temp;

    for(i = 0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }

    int count = 0, sum = 0;
    for(i = 0;i<n;i++){
        if(sum == k){
            count++;
            sum = 0;
        } else if((sum + arr[i] >= k)){
            count++;
            sum = 0;
        }
        sum += arr[i];
    }
    if(sum == k) {
        count++;
    }
    cout<<count<<"\n";
    return 0;
}
