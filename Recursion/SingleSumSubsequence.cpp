#include<bits/stdc++.h>

using namespace std;

bool sumSubsequence(int i, int arr[], int n, int s, int sum, vector<int> &v) {
    if(i >= n) {
        if(s == sum){
            for(auto &x : v) cout<<x<<" ";
            cout<<"\n";

            return true;
        }
        return false;
    }
    //Take Condition
    s += arr[i];
    v.push_back(arr[i]);
    if(sumSubsequence(i+1, arr, n, s, sum, v) == true){
        return true;
    }

    //Not Take Condition
    s -= arr[i];
    v.pop_back();
    if (sumSubsequence(i+1, arr, n, s, sum, v)) return true;
    
    return false;
}

int main(){

    int n = 3;
    int arr[n] = {1, 2, 1};
    vector<int> v;
    sumSubsequence(0, arr, n, 0, 2, v);

    return 0;
}