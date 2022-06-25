#include<bits/stdc++.h>

using namespace std;

void printName(int i, int n){
    if(i >= n){
        return;
    }
    cout<<"Rajat\n";
    printName(i+1,n);
}

int main(){

    printName(0,3);

    return 0;
}