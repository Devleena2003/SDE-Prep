bool detect(int index, vector<int> adj[], int vis[], int pathVis[])
{
    vis[index] = 1;
    pathVis[index] = 1;
    for (auto it : adj[index])
    {
        if (!vis[it])
        {
            if (detect(it, adj, vis, pathVis))
                return true;
        }

        else if (pathVis[it])
            return true;
    }
    // backtrack
    pathVis[index] = 0;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    // code here
    int vis[V] = {0};
    int pathVis[V] = {0};
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            if (detect(i, adj, vis, pathVis))
                return true;
        }
    }

    return false;
}