#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<int> s;
    int q;
    cin>>q;

    while(q--){
        int ch, n;
        cin>>ch;

        if(ch == 1){
            cin>>n;
            s.push(n);
        } else {
            if(s.empty()){
                cout<<"kuchbhi?\n";
            } else {
                cout<<s.top()<<endl; s.pop();
            }
        }
    }
    return 0;
}
