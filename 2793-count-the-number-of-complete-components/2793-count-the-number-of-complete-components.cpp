class Solution {
public:
    void dfs(vector<vector<int>> &adj, int node, vector<int> &vis, pair<int, int> &comp){
        vis[node] = 1;
        comp.first++;
        comp.second+=adj[node].size();
        for(auto it: adj[node]){
            if(!vis[it]) dfs(adj, it, vis, comp);
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(int i=0; i<edges.size(); i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> vis(n, 0);
        int ans =0;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                pair<int, int> comp = {0,0};

                dfs(adj, i, vis, comp);
                if(comp.first*(comp.first-1)==comp.second)
                ans++;
            }
        }
        return ans;


    }
};