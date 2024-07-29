class Solution
{
public:
    int findPairs(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end()); // 1,1,3,4,5   k=0
        set<pair<int, int>> ans;
        int i = 0, j = 1;
        while (j < nums.size())
        {
            int diff = nums[j] - nums[i];
            if (diff == k)
                ans.insert({nums[i++], nums[j++]});
            else if (diff > k)
                i++;
            else
                j++;
            if (i == j)
                j++;
        }
        return ans.size();
    }
};