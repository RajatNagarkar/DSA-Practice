#include<bits/stdc++.h>

using namespace std;

string makeGood(string str) {
    stack<char> goodStack;
    int i;
    for(i = 0;i<str.length();i++){
        if(goodStack.empty()){
            goodStack.push(str[i]);
        } else {
            char ch = goodStack.top();
            ch += ch > 96 ? -32 : +32;
            if(ch == str[i]){
                goodStack.pop();
            } else {
                goodStack.push(str[i]);
            }
        }
    }
    str.clear();
    while(!goodStack.empty()) {
        str = goodStack.top() + str;
        goodStack.pop();
    }
    return str;
}

int main(){

    string str;
    cin>>str;
    cout<<makeGood(str);

    return 0;
}