int eraseOverlapIntervals(vector<vector<int>> &intervals)
{
    int ans = 0;
    int end = INT_MIN;
    sort(intervals.begin(), intervals.end());
    for (auto it : intervals)
    {
        if (end > it[0])
        {
            ans++;
            end = min(end, it[1]);
        }

        else
            end = it[1];
    }

    return ans;
}