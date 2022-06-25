//BT is Backtracking

#include<bits/stdc++.h>

using namespace std;

void printNum(int i, int n){
    if(i < 1){
        return;
    }
    printNum(i-1, n);
    cout<<i<<"\n";
}

int main(){

    int n = 5;
    printNum(n,n);

    return 0;
}