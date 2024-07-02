string encode(string s)
{
    // code here
    char prev = s[0];
    int count = 1;
    string ans = "";
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == prev)
            count++;

        else
        {
            ans += prev;
            ans += to_string(count);
            prev = s[i];
            count = 1;
        }
    }

    ans += prev;
    ans += to_string(count);
    return ans;
}