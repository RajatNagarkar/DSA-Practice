#include<bits/stdc++.h>

using namespace std;

 bool isValid(string str) {
    stack<char> p;
    int i;
    char ch;
    bool isB = false;
    for(i = 0;i<str.length();i++) {
        if(p.empty() && (str[i] == ')' || str[i] == ']' || str[i] == '}'))
            return false;
        else if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
            p.push(str[i]);
        }
        else if(str[i] == ')' || str[i] == ']' || str[i] == '}'){
            if(str[i] == ')'){
                if(p.top() == '('){
                    isB = true;
                } else {
                    isB = false;
                    break;    
                }
            }
            if(str[i] == ']') {
                if(p.top() == '['){
                    isB = true;
                } else {
                    isB = false;
                    break;    
                }
            }
            if(str[i] == '}') {
                if(p.top() == '{'){
                    isB = true;
                } else {
                    isB = false;
                    break;    
                }
            }
            p.pop();
        }
    } 
    if(!p.empty()){
        isB = false;
    }
    return isB;
}

int main(){

    string str;
    cin>>str;
    cout<<isValid(str);
    return 0;
}