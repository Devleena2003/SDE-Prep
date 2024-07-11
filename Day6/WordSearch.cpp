bool search(int i, int j, int n, int m, vector<vector<char>> &board, vector<vector<int>> &vis, int k, string word)
{
    // base case
    if (k == word.size())
        return true;
    if (i == n || j == m || i < 0 || j < 0 || board[i][j] != word[k] || vis[i][j] == 1)
        return false;
    char ch = board[i][j];
    vis[i][j] = 1;
    bool op1 = search(i + 1, j, n, m, board, vis, k + 1, word);
    bool op2 = search(i - 1, j, n, m, board, vis, k + 1, word);
    bool op3 = search(i, j + 1, n, m, board, vis, k + 1, word);
    bool op4 = search(i, j - 1, n, m, board, vis, k + 1, word);
    // backtrack
    vis[i][j] = 0;
    return op1 || op2 || op3 || op4;
}
bool isWordExist(vector<vector<char>> &board, string word)
{
    // Code here
    int n = board.size();
    int m = board[0].size();
    int k = word.size();
    vector<vector<int>> vis(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (search(i, j, n, m, board, vis, 0, word) == true)
                return true;
        }
    }
    return false;
}