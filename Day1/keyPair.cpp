bool hasArrayTwoCandidates(int arr[], int n, int x)
{
    // code here

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(x - arr[i]) != mp.end())
            return true;

        mp[arr[i]]++;
    }

    return false;
}