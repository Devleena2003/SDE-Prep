class Solution {
public:
    int minimumIndex(vector<int>& nums) {
      unordered_map<int, int> mp; // Stores frequency of each number in the array
        unordered_map<int, pair<int, int>> pairs; // Stores {max frequency so far, dominant element} for each index
        int maxi = 0, ele = 0; // maxi = max frequency so far, ele = dominant element
        int n = nums.size() - 1; // n represents the last index of the array

        // **Step 1: Find the dominant element and store prefix frequency data**
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++; // Increment frequency of nums[i]
            
            // Update the dominant element if the current number has a higher frequency
            if (mp[nums[i]] > maxi) {
                ele = nums[i]; // Update dominant element
                maxi = mp[nums[i]]; // Update max frequency
            }

            // Store the current max frequency and dominant element at index `i`
            pairs[i] = {maxi, ele};
        }

        // **Step 2: Find the minimum index where the array can be split**
        for (int i = 0; i < nums.size() - 1; i++) {
            int farr = (i + 1) / 2; // Required frequency for the first part (at least half of its length)
            int sarr = (n - i) / 2; // Required frequency for the second part (at least half of its length)

            int freq1 = pairs[i].first; // Frequency of dominant element in the first part (prefix)
            int freq2 = pairs[n].first - freq1; // Frequency of dominant element in the second part (remaining portion)

            // Check if the dominant element remains dominant in both parts
            if (freq1 > farr && freq2 > sarr && pairs[i].second == pairs[n].second) {
                return i; // Return the first valid split index
            }
        }

        return -1;   
    }
};