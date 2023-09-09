#include <bits/stdc++.h>
using namespace std;
 void bfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &ans){
    queue<int> q;
    q.push(0);
    vis[0] = 1;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for (auto it : adj[node])
        { // for(auto it:v){.it..} here it of vector is adjacent node
            if (vis[it] == 0)
            {
                q.push(it);
                vis[it] = 1;
            }
        }
    }
}
vector<int> bfsOfGraph(int V, vector<int> adj[]){
    vector<int> vis(V + 1, 0);
    vector<int> ans;
    for (int i = 0; i <= V; i++)
    {
        if (!vis[i])
        {
            bfs(i, vis, adj, ans);
        }
    }
    return ans;
}

int main()
{
    int v, e;
    vector<int> adj(v + 1, 0);
    // bfsOfGraph(v, adj);
}