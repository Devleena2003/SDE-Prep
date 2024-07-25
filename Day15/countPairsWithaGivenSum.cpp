int getPairsCount(const vector<int> &arr, int k)
{
    // code here
    unordered_map<int, int> mp;
    int count = 0;

    for (int i : arr)
    {
        if (mp.find(k - i) != mp.end())
        {
            count += mp[k - i];
        }

        mp[i]++;
    }

    return count;
}