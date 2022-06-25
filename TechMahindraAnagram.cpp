#include<bits/stdc++.h>

using namespace std;

string anagramCheck(string str1, string str2) {
    int flag = 1, i;

    int len1 = str1.length();
    int len2 = str2.length();

    if(len1 != len2)
        return "no";
    
    for(i = 0;i<len1;i++){
        if(str2.find(str1[i]) == string::npos){
            flag = 0;
            break;
        }
    }
    return flag == 1 ? "yes" : "no";
}

int main(){

    cout<<anagramCheck("build", "dubil");

    return 0;
}