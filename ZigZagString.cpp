#include<bits/stdc++.h>

using namespace std;

string zigZagString(string str, int n){
    if(n==1)
        return str;

    int i=0, j=0, len, k;
    len = str.length();
    char matrix[n][len];

    for(i = 0;i<n;i++){
        for(j = 0;j<len;j++){
            matrix[i][j] = '@';
        }
    }
    i = 0, j = 0;

    for(k = 0;k<len;){
        if(i == 0){
            while(i < n && k < len){
                matrix[i][j] = str[k];
                i++;
                k++;
            }
            i -= 2;
            j++;
        }
        while(i != 0 && k < len){
            matrix[i][j] = str[k];
            i--;
            j++;
            k++;
        }
    }
    string ans = "";
    for(i = 0;i<n;i++){
        for(j = 0;j<len;j++){
            if(matrix[i][j] != '@'){
                ans += matrix[i][j];
            }
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return ans;
}

int main(){

    string s;
    int n;
    cin>>s;
    cin>>n;
    cout<<zigZagString(s, n);
    return 0;
}