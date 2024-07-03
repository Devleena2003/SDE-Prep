vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices)
{
    // write your code here
    vector<int> nge;
    for (int i = 0; i < queries; i++)
    {
        int count = 0;
        for (int j = indices[i]; j < n; j++)
        {
            if (arr[indices[i]] < arr[j])
                count++;
        }
        nge.push_back(count);
    }

    return nge;
}
