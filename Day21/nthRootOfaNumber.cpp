int nthRoot(int n, int m)
{
    int low = 1;
    int high = m;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int midN = f(mid, n, m);
        if (midN == 1)
            return mid;
        else if (midN == 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int f(int mid, int n, int m)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * mid;
    }
    if (ans == m)
        return 1;
    if (ans > m)
        return 2;
    else
        return 0;
}