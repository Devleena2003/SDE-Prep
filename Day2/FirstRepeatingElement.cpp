int firstRepeated(int arr[], int n)
{
    // code here

    unordered_map<int, int> mp;
    int ans = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        mp[arr[i]]++;

        if (mp[arr[i]] > 1)
            ans = min(i, ans);
    }

    if (ans == INT_MAX)
        return -1;

    return ans + 1;
}