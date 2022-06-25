#include<bits/stdc++.h>

using namespace std;

bool isPallidrome(int i, string str, int n){
    if(i >= n/2){
        return true;
    }
    if(str[i] != str[n-i-1]){
        return false;
    }
    return isPallidrome(i+1, str, n);
    
}

int main(){

    string str;
    cin>>str;
    cout<<"Pallindrome: "<<isPallidrome(0, str, str.length());
    return 0;
}