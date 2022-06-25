#include<bits/stdc++.h>

using namespace std;

vector<vector<string>>  groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> m;
    for(auto s: strs) {
        string t = s;
        sort(t.begin(), t.end());
        m[t].push_back(s);
    }
    vector<vector<string>> res;
    for(auto it = m.begin(); it != m.end(); it++) {
        res.push_back(it->second);
    }
    return res;
}

int main(){

    vector<string> v;
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    for(auto it: groupAnagrams(v)){
        for(auto it1: it){
            cout<<it1<<" ";
        }
        cout<<endl;
    }
    return 0;
}