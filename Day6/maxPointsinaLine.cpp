int maxPoints(vector<vector<int>> &points)
{
    int ans = 1;
    int n = points.size();
    for (int i = 0; i < n; i++)
    {
        // storing the slope and no of points
        unordered_map<double, int> mp;
        for (int j = i + 1; j < n; j++)
        {
            if (points[i][0] == points[j][0])
                mp[10000001]++;
            else
            {
                double slope = (double)(points[i][1] - points[j][1]) / (double)(points[i][0] - points[j][0]);
                mp[slope]++;
            }
        }
        int temp = 0;
        for (auto it : mp)
        {
            temp = max(temp, it.second);
        }
        ans = max(ans, temp + 1);
    }

    return ans;
}