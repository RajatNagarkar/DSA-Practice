#include<bits/stdc++.h>

using namespace std;

#define N 100000
int prm[N];

void prime() {
    
    memset(prm, 1, sizeof(prm));
    prm[0] = 0;
    prm[1] = 0;

    for(int i = 2;i*i<N;i++) {
        if(prm[i]) {
            for(int j = i*i;j<N;j+=i) {
                prm[j] = 0;
            }
        }
    }
}

int getPrime(int sum) {
    for(int i = sum;i<N;i++) {
        if(prm[i]) return i;
    }
    return 0;
}
int append_to_reach_nearest_prime(int arr[], int n) {
    //Write your code here
    prime();
    int sum = 0;
    for(int i = 0;i<n;i++) sum += arr[i];
    
    int np = getPrime(sum);

    return np - sum;

}

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<append_to_reach_nearest_prime(arr, n);
    return 0;
}