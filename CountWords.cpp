#include<bits/stdc++.h>

using namespace std;

int count_of_words(char *str) {
    int cnt = 0;

    for(int i = 0;str[i] != '\0';i++) {
        if(str[i] == ' ') {
            cnt++;
        }
    }
    return cnt+1;
}

int main(){
    char ch[100];
    gets(ch);

    cout<<countWords(ch);
}