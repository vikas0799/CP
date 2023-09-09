#include<bits/stdc++.h>
using namespace std;
    void dfs(int node,vector<int>&vis,vector<int>adj[],vector<int>&ans){
        ans.push_back(node);
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,vis,adj,ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>vis(V+1,0);
        vector<int>ans;
        for(int i=0;i<=V;i++){
            if(!vis[i])
            {
                dfs(i,vis,adj,ans);
            }
        }
        return ans;
    }

int main(){
   int v,e;
   vector<int>adj(v+1,0);
// dfsOfGraph(v, adj);
}