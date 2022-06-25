#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
    bool checkCycle(int node, vector<int> adj[], vector<int> &vis) {
        vis[node] = 1;

        queue<pair<int, int>> q;

        q.push({node, -1});

        while(!q.empty()) {
            int curr_node = q.front().first;
            int par = q.front().second;
            q.pop();

            for(auto it:adj[curr_node]) {
                if(!vis[it]){
                    vis[it] = 1;
                    q.push({it, curr_node});
                }
                else if(par != it) {
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int v, vector<int> adj[]) {
        vector<int> vis(v+1, 0);

        for(int i = 1;i<=v;i++) {
            if(!vis[i]){
                if(checkCycle(i, adj, vis)) 
                    return true;
            }
        }
        return false;
    }

};

int main(){

    int n, m;
    cin>>n>>m;

    vector<int> adj[n];

    for(int i = 0;i<m;i++) {
        int u, v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    Solution obj;

    bool hasCycle = obj.isCycle(n, adj);
    if(hasCycle){
        cout<<"Graph has cycle";
    }
    else {
        cout<<"Graph does not has cycle";
    }
    return 0;
}
