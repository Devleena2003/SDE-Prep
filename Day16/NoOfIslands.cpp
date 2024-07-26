int numIslands(vector<vector<char>> &grid)
{
    // dfs algo
    int n = grid.size();
    int m = grid[0].size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // if there is a island
            if (grid[i][j] == '1')
            {
                ans++;
                solve(i, j, n, m, grid);
            }
        }

        return ans;
    }
}

void solve(int i, int j, int n, int m, vector<vector<char>> &grid)
{
    // already visited or outside the range
    if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == '0')
        return;

    // mark it visited

    grid[i][j] = '0';

    // go for adjacency

    solve(i + 1, j, n, m, grid);
    solve(i, j - 1, n, m, grid);
    solve(i - 1, j, n, m, grid);
    solve(i, j + 1, n, m, grid);
}