#include<bits/stdc++.h>

using namespace std;

string str;
stack<string> s;

void logStack(){
    s.push(str);
    return;
}

void append(string subStr){
    logStack();
    str += subStr;
    return;
}

void deleteChars(int num) {
    logStack();

    int pos = str.length() - num;
    str.erase(pos, num);
    return;
}

void printStr(int ind) {
    ind--;
    cout<<str[ind]<<"\n";
    return;
}

void undo() {

    if(s.size() != 0) {
        str = s.top();
        s.pop();
    } else {
        str.erase();
    }
    return;
}

int main(){

    int n, i;
    cin>>n;
    for(i = 0;i<n;i++) {
        int ch;
        cin>>ch;
        if(ch == 1){
            string tempStr;
            cin>>tempStr;
            cin.clear();
            append(tempStr);
        } else if(ch == 2) {
            int ind;
            cin>>ind;
            cin.clear();
            deleteChars(ind);
        } else if (ch == 3) {
            int ind;
            cin>>ind;
            cin.clear();
            printStr(ind);
        } else if (ch == 4) {
            undo();
        }
        
    }

    return 0;
}