#include<bits/stdc++.h>

using namespace std;

int main(){
    int x;
    float y;

    cin>>x>>y;

    x+0.5>y || x%5 ? cout<<y : cout<<y-(x+0.5);

    return 0;
}