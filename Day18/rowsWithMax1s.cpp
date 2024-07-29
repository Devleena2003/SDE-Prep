int rowWithMax1s(vector<vector<int>> &arr)
{
    // code here
    int index = -1, count = 0, n = arr.size(), m = arr[0].size(), ans = 0;

    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j])
                count++;
        }
        if (count > ans)
        {
            ans = count;
            index = i;
        }
    }
    return index;
}