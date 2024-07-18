int networkDelayTime(vector<vector<int>> &times, int V, int k)
{

    // if there is a one node
    if (V == 1)
        return 0;

    int minTime = 0;
    // create an adjacency list
    vector<vecto<int>> adj[V];
    for (int i = 0; i < times.size(); i++)
    {
        vector<int> v;
        v.push_back(times[i][1] - 1); // add the vertex/node
        v.push_back(times[i][2]);     // add the time/edgeweight
        adj[times[i][0] - 1].push_back(v);
        .push_b
    }

    // implement dijkstra algo for getting min dist

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist[V];
    for (int i = 0; i < V; i++)
    {
        dist[i] = 1e+9;
    }
    dist[k - 1] = 0;
    pq.push({0, k - 1});
    while (!pq.empty())
    {
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        // check adjacencey

        for (auto it : adj[node])
        {
            int edW = it[1];
            int distNode = it[0];
            if (dis + edW < dist[distNode])
            {
                dist[distNode] = dis + edW;
                pq.push({dist[distNode], distNode});
            }
        }
    }

    // we get the min distance

    for (int i = 0; i < V; i++)
    {
        if (dist[i] == 1e+9)
            return -1;

        minTime = max(minTime, dist[i]);
    }

    return minTime;
}