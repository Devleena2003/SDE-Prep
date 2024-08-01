string longestCommonPrefix(vector<string> arr)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    string f = arr[0];
    string l = arr[n - 1];
    for (int i = 0; i < min(f.length(), l.length()); i++)
    {
        if (f[i] != l[i])
        {
            if (ans == "")
                return "-1";
            else
                return ans;
        }
        else
            ans += f[i];
    }
    if (ans == "")
        return "-1";
    return ans;
}