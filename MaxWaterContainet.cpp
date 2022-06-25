#include<bits/stdc++.h>

using namespace std;

int maxContainer(vector<int> height)
{
    int i, ind = height.size()-1;
    int last = height.end();
    for(i = 0, i< height.size();i++){
        int num = min(height[i], last);

    }
}

int main(){

    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<maxContainer(v);

    return 0;
}

int factor = n / m;
int ans = factor * m;

cout<<ans;