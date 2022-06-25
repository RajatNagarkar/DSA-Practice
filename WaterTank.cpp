#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

void  produceTime(lli cap){
    if(cap > 7000){
        cout<<"OVERLOAD";
    } else if(cap > 4000){
        cout<<"Time Estimated : - 45 minutes\n";
    } else if(cap > 2000){
        cout<<"Time Estimated : - 35 minutes\n";
    } else if(cap > 0){
        cout<<"Time Estimated : - 25 minutes\n";
    } else if(cap == 0){
        cout<<"Time Estimated : - 0 minutes\n";
    } else { 
        cout<<"INVALID INPUT";
    }
}

int main(){

    lli cap;
    cin>>cap;

    produceTime(cap);
    
    return 0;
}