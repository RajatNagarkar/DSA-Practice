#include<bits/stdc++.h>

using namespace std;

string minRemoveToMakeValid(string str) {
    int i, op=0, cp=0, alphaFlag = 0;
    stack<char> s;
    for(i = 0;i<str.length();i++){
        if(str[i] == ')' && op == 0){
            continue;
        } else {
            if(str[i] == '('){
                op++;
            } else if(str[i] == ')'){
                cp++;
            } else {
                alphaFlag = 1;
            }
        }
        s.push(str[i]);
    }
    int limit = abs(op-cp);
    str.clear();
    if(alphaFlag == 0){
        return str;
    }
    char ch = ')';
    if(op > cp){
        ch = '(';
    }
    while(!s.empty()){
        if(limit > 0){
            if(s.top() == ch){
                s.pop();
                limit--;
            }
        }
        str = s.top() + str;
        s.pop();
    }
    return str;
}

int main(){
    string str;
    cin>>str;
    cout<<minRemoveToMakeValid(str);

    return 0;
}