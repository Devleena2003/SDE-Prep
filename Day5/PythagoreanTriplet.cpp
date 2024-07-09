bool checkTriplet(int arr[], int n)
{
    // code here
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i] * arr[i]]++;
    }
    for (auto i : mp)
    {
        for (auto j : mp)
        {
            if (mp.find(i.first + j.first) != mp.end())
                return true;
        }
    }
    return false;
}