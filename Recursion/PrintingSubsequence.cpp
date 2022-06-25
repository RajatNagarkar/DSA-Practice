#include<bits/stdc++.h>

using namespace std;

void printSubsequence(int i, int arr[], int n, vector<int> &v) {
    if(i >= n){
        for(auto &i : v){
            cout<<i<<" ";
        }
        cout<<"\n";
        return;
    }
    v.push_back(arr[i]);
    printSubsequence(i+1, arr, n, v);
    v.pop_back();
    printSubsequence(i+1, arr, n, v);
}

int main(){

    int n = 3;
    int arr[n] = {3, 1, 2};
    vector<int> v;
    printSubsequence(0, arr, n, v);

    return 0;
}