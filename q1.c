#include<stdio.h> 

int aplha(char c)
{
    if((c>='a'&&c<='z') || (c>='A'&&c<='Z'))
        return 1;
    else
        return 0;
}

int digit(char c)
{
    if(c>='0'&&c<='9')
        return 1;
    else
        return 0;
}

int main() {
    char str[1000];

    scanf("%s", &str);

    int cnt = 0;

    for(int i = 0;str[i] != '\0';i++) {
        if(aplha(str[i]) || digit(str[i])) {
            continue;
        } else {
            cnt++;
        }
    }

    printf("%d", cnt);
    return 0;
}