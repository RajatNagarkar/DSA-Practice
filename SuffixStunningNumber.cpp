#include<bits/stdc++.h>

using namespace std;


int main(){

    int k, m, i;
    cin>>k>>m;
    int count = 0;
    for(i = m;i>= k;i--){
        int temp = k;
        int num = i;
        int flag = 1;
        while(temp != 0){
            int remNum = num %10;
            num /= 10;
            int remTemp = temp % 10;
            temp /= 10;

            if(remNum != remTemp){
                flag = 0;
                break;
            }
        }
        if(flag) {
            count++;
        }
    }
    cout<<count<<"\n";

    return 0;
}