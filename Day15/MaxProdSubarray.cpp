long long maxProduct(vector<int> arr, int n)
{
    long long product = 1;
    long long ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
        ans = max(ans, product);
        if (product == 0)
        {
            product = 1;
        }
    }
    product = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        product *= arr[i];
        ans = max(ans, product);
        if (product == 0)
        {
            product = 1;
        }
    }

    return ans;
}
