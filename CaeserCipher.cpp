#include<bits/stdc++.h>

using namespace std;

int main(){
    char str[1000];
    int i;
    scanf("%s", &str);

    for(i = 0;str[i]!='\0';i++){
        if(str[i] == 'z'){
            str[i] = 'c';
        }
        else if(str[i] == 'y'){
            str[i] = 'b';
        } else if(str[i] == 'x'){
            str[i] = 'a';
        } else {
            str[i] += 3;
        }
    }
    printf("%s\n", str);
    return 0;
}