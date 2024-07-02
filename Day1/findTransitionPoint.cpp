int transitionPoint(int arr[], int n)
{
    // code here
    int target = 1;
    int result = -1;
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {

        int mid = (e + s) / 2;
        if (arr[mid] == target)
        {
            result = mid;
            e = mid - 1;
        }

        else if (arr[mid] < target)
            s = mid + 1;

        else
            e = mid - 1;
    }
    return result;