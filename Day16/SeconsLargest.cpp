int print2largest(vector<int> &arr)
{
    int max = INT_MIN;
    int max2 = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max)
            max2 = max(arr[i], max2);
    }
    return max2;
}

// second smallest element

int print2smallest(vector<int> &arr)
{
    int min = INT_MAX;
    int min2 = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != min)
            min2 = min(arr[i], min2);
    }
    return min2;
}