#include<bits/stdc++.h>

using namespace std;

void sumSubsequence(int i, int arr[], int n, int s, int sum, vector<int> &v) {
    if(i >= n) {
        if(s == sum){
            for(auto &x : v) cout<<x<<" ";
            cout<<"\n";
        }
        return;
    }
    //Take Condition
    s += arr[i];
    v.push_back(arr[i]);
    sumSubsequence(i+1, arr, n, s, sum, v);

    //Not Take Condition
    s -= arr[i];
    v.pop_back();
    sumSubsequence(i+1, arr, n, s, sum, v);
    
}

int main(){

    int n = 3;
    int arr[n] = {1, 2, 1};
    vector<int> v;
    sumSubsequence(0, arr, n, 0, 2, v);

    return 0;
}