bool commonSubseq(string a, string b)
{
    // your code here
    unordered_set<int> s;
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        s.insert(a[i]);
    }

    for (int i = 0; i < b.size(); i++)
    {
        if (s.find(b[i]) != s.end())
            count++;
    }

    if (count == 0)
        return false;
    return true;
}