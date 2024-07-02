vector<int> subarraySum(vector<int> arr, int n, long long s)
{
    // Your code here
    // sliding window method
    int right = 0;
    int left = 0;

    long long sum = arr[left];
    while (right < n)
    {
        if (sum == s)
        {

            return {left + 1, right + 1};
        }
        else if (sum < s)
        {
            right++;
            sum += arr[right];
        }
        else if (sum > s && left == right)
        {

            // skip the element and go for next
            //[1,3,30,7,5] s=12  for handling this type of cases
            left++;
            right++;
            sum = arr[left];
        }
        else
        {
            sum -= arr[left];
            left++;
        }
    }
    return {-1};
}