#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }

    int idx = 0, secIdx = 0;
    for(int i = 0;i < n;i++) {
        if(arr[i] > arr[idx]) {
            idx = i;
        }
    }

    for(int i = 0;i < n;i++) {
        if(arr[i] > arr[secIdx] && i != idx) {
            secIdx = i;
        }
    }
    
    if(n == 0){
        printf("0");
    } 
    else if(n == 1){
        printf("%d", arr[0]);
    } 
    else {
        printf("%d", arr[idx] + arr[secIdx]);
    }


}