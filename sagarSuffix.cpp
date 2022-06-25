#include<bits/stdc++.h>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){
    long long  int n,m;
    int i;
    string str,str_m;
    cin>>n>>m;
    str_m=to_string(n);
    reverse(str_m.begin(),str_m.end());
    int len=stoi(str_m);
    int z=1;
    while(len!=0){
        len=len/10;
        z=z*10;
    }
    int count = 0;
    len=str_m.length();
    for(i=z;i<=m;i++){
        str=to_string(i);
        reverse(str.begin(),str.end());
        string str1=str.substr(0,len);
        // cout<<str1<<" ";
        if(str1==str_m){
            count++;
        }
    }
}