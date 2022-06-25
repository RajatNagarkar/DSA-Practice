#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    if(n % 2 == 0) {
        if(n >= 2 && n <= 5){
            printf("Not Wierd");
        } 
        else if(n >= 6 && n <= 20) {
            printf("Wierd");
        } else {
            printf("Not Wierd");
        }
    } 
    else {
        printf("Wierd");
    }


    return 0;
}