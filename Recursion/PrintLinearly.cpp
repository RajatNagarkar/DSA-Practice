#include<bits/stdc++.h>

using namespace std;

void printNum(int i, int n){
    if(i > n){
        return;
    }
    cout<<i<<"\n";
    printNum(i+1,n);
}

int main(){

    int n = 5;

    printNum(1, n);

    return 0;
}