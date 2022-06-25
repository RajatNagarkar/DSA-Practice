#include<bits/stdc++.h>

using namespace std;
int escapingJail(int x, int y, int n, vector<int> walls) {
    int count = 1;

    int sum = accumulate(walls.begin(), walls.end(), 0);

    if(x >= sum){
        return count;
    }
    x = x-y;
    return (sum/x)+1;
}


int main(){

    int x, y, n;
    cin>>x>>y>>n;

    vector<int> walls;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        walls.push_back(temp);
    }
    cout<<escapingJail(x, y, n, walls);
    return 0;
}