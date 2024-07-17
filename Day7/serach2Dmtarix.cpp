bool searchMatix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int low = 0;
    int high = n * m - 1;
    int mid = low + (high - low) / 2;

    while (low <= high)
    {
        int element = matrix[mid / col][mid % col]; // This uses the calculated row and column indices to access the specific element in the 2D matrix.
        if (element == target)
            return 1;

        else if (element < target)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;

        mid = low + (high - low) / 2; // update the mid
    }

    return 0;
}