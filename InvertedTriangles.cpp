#include<bits/stdc++.h>

using namespace std;

int main(){

    int n = 11, i, j;
    int m = 2*n-1;
    int check = 0;
    for(i = 0;i<n;i++){
        for(j = 0;j<m;j++){
            if(i +j <= check || i+j >= (m-1)){
                cout<<" * ";
            }
            else {
                cout<<"   ";
            }

        }
        check += 2;
        cout<<"\n";
    }

    return 0;
}