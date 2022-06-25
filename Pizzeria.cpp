#include<bits/stdc++.h>

using namespace std;


int main(){
    freopen("e.txt", "r", stdin);
    freopen("e-out.txt", "w", stdout);
    unordered_map<string, int> ing;

    int n;
    cin>>n;

    while(n--) {
        int li, di;
        cin>>li;
        while(li--) {
            string str;
            cin>>str;
            cin.clear();
            if(ing[str] != -1) {
                ing[str] = 1;
            }
        }
        cin>>di;
        while(di--) {
            string str;
            cin>>str;
            ing[str] = -1;
        }
    }
    int cnt = 0;
    for(auto it:ing) {
        if(it.second != -1) {
            cnt++;
        }
    }
    cout<<cnt;
    for(auto it:ing) {
        if(it.second != -1)
            cout<<" "<<it.first;
    }
    

    return 0;
}