int minDist(int a[], int n, int x, int y)
{
    // code here
    int p = -1;
    int q = -1;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            p = i;
        if (a[i] == y)
            q = i;
        if (p != -1 && q != -1)
        {
            int diff = abs(p - q);
            mini = min(mini, diff);
        }
    }
    if (mini == INT_MAX)
        return -1;
    return mini;
}