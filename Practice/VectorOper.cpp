#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    // int arr[5] = {1,2,3,4}// => {}
    vector<int> v;
    //push_back
    //pop_back
    //size
    //clear
    //find()
    int num;
    for(int i = 0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    for(int i =0;i<n;i++){
        cout<<v[i]<<"\n";
    }
    return 0;
}