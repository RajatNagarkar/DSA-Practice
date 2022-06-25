#include<bits/stdc++.h>

using namespace std;

bool isCon[CHAR_MAX] = {false};

void init(){
    for(int i = 0;i<CHAR_MAX;i++){
        if(isalpha(i)){
            isCon[i] = true;
        }
    }
    isCon['a'] = isCon['e'] = isCon['i'] = isCon['o'] = isCon['u'] = false;
}

int main(){
    init();
    string str;
    getline(cin, str);

    int i, track = 1;
    string ans;
    int ind = 0;
    for(i = 0; i < str.length(); i++){
        if(track % 3 == 1){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
                str[i] = '%';
            } 
        } else if(track % 3 == 2){
            if(isCon[str[i]]){                                              
                str[i] = '#';
            }
        } else if(track % 3 == 0){
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] = str[i] - 32;
            }
        }
        if(track % 3 != 0 && str[i] == ' '){
            string temp = str.substr(ind, i);
        }

        if(str[i] != ' '){
            ans += str[i];
        }
        if(str[i] == ' ' && track % 3 == 0){
            ans += str[i];
        }
        if(str[i] == ' '){
            track++;
        }
    }
    cout<<ans<<endl;
    return 0;
}