int makeConnected(int n, vector<vector<int>> &connections)
{
    if (connections.size() < n - 1)
        return -1;
    // create a graph
    vector<vector<int>> adj(n);
    for (int i = 0; i < connections.size(); i++)
    {
        int a = connections[i][0];
        int b = connections[i][1];
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> vis(n, 0);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
        {
            count++;
            dfs(adj, i, vis);
        }
    }
    return count - 1;
}

void dfs(vector<vector<int>> &adj, int index, vector<int> &vis)
{
    vis[index] = 1;
    for (auto it : adj[index])
    {
        if (vis[it] == 0)
        {
            vis[it] = 1;
            dfs(adj, it, vis);
        }
    }
}