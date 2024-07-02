void dfs(int i, int j, vector<vector<char>> &grid, vector<vector<bool>> &visited, int dx[], int dy[], int n, int m)
{
    visited[i][j] = true;
    for (int k = 0; k < 8; k++)
    {
        int I = i + dx[k];
        int J = j + dy[k];
        if (I < n && J < m && I >= 0 && J >= 0 && grid[I][J] == '1' && !visited[I][J])
        {
            dfs(I, J, grid, visited, dx, dy, n, m);
        }
    }
}

int numIslands(vector<vector<char>> &grid)
{
    // Code here
    int ans = 0;
    int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && grid[i][j] == '1')
            {
                ans++;
                dfs(i, j, grid, visited, dx, dy, n, m);
            }
        }
    }

    return ans;
}