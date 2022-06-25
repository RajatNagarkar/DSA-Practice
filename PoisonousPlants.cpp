#include<bits/stdc++.h>

using namespace std;



int main(){
    stack<long int> okPlants;
    int n, i;
    cin>>n;
    long int plants[n];
    for(i = 0;i<n;i++) {
        cin>>plants[i];
        if(okPlants.empty()){
            okPlants.push(plants[i]);
        } else if(plants[i-1] > plants[i]) {
            okPlants.push(plants[i]);
        }
    }
    int count = 0;
    int sorted = 1;
    for(i = 1;i<n;i++){
        if(plants[i-1] <= plants[i]){
            sorted = 0;
        }
    }

    if(sorted){
        cout<<count<<"\n";
        return 0;
    }

    redo:n = i = okPlants.size();
    count++;
    while(!okPlants.empty()){
        plants[--i] = okPlants.top();
        okPlants.pop();
    }
    int flag = true;
    for(i = 1;i<n;i++){
        if(plants[i-1] <= plants[i]){
            flag = false;
            break;
        }
    }
    if(flag){
        goto done;
    } else {
        for(i = 0;i<n;i++){
            if(okPlants.empty()){
                okPlants.push(plants[i]);
            } else if(plants[i-1] > plants[i]) {
                okPlants.push(plants[i]);
            }
        }
        goto redo;
    }
    done:cout<<count<<"\n";
    return 0;
}