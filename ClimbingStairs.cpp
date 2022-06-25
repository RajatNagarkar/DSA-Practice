#include<bits/stdc++.h>

using namespace std;

int climbingStairs(int n){
    int arr[n+2];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    for(int i = 3;i<n+2;i++)
        arr[i] = arr[i-1] + arr[i-2];
    return arr[n];
}

int ClimbingStairsRecur(int n){
    if(n<= 1)
        return 1;
    return ClimbingStairsRecur(n-1) + ClimbingStairsRecur(n-2);
}

int main(){

    int n;
    cin>>n;

    
    cout<<ClimbingStairsRecur(n);
    return 0;
}