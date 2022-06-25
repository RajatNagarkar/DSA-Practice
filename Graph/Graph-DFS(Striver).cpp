#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
    void dfs(vector<int> adj[], int node, vector<int> &dfsList, vector<int> &vis) {
        dfsList.push_back(node);

        for(auto it:adj[node]) {
            if(!vis[it]) {
                vis[it] = 1;
                dfs(adj, it, dfsList, vis);
            }
        }
    }
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        vector<int> dfsList;
        vector<int> vis(v+1, 0);

        for(int i = 1;i<=v;i++) {
            if(!vis[i]) {
                vis[i] = 1;
                dfs(adj, i, dfsList, vis);
            }
        }
        return dfsList;
    }
};

int main(){

    int n, m;

    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i = 0;i<m;i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    Solution obj;

    vector<int> bfs = obj.dfsOfGraph(n, adj);

    for(auto it:bfs) {
        cout<<it<<" ";
    }
    return 0;
}