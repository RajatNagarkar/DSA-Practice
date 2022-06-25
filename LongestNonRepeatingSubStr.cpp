#include<bits/stdc++.h>

using namespace std;

int isUniqueMax(string str, int max, int sslen) {
    map<char, int> charMap;
    int i , j;
    bool isUnique = true;
    for(i = 0;i<sslen;i++) {
        if(charMap[str[i]] >= 1){
            isUnique = false;
            break;
        } else {
            charMap[str[i]]++;
        }
    }
    if(isUnique) {
        max = max < charMap.size() ? charMap.size() : max;
        cout<<str<<" "<<max<<endl;
    }    
    return max;
}

int slidingWindow(string str) {
    int lb = 0, i, j, max = 0, superMax = 0;
    int len = str.length();
    int wLen = len;
    for(i = 0;i<len;i++) {
        for(j = 0;j<len;j++){
            string subStr = str.substr(j, wLen);
            int sslen = subStr.length();
            // if(sslen < wLen) {
            //     break;
            // }
            max = isUniqueMax(subStr, max, sslen);
        }
        wLen--;
        if(superMax < max) {
            superMax = max;
        } else 
            break;
    }
    return max;
}

int main(){

    string str;

    cin>>str;
    cout<<slidingWindow(str);
    cout<<"\n----\n";

    return 0;
}