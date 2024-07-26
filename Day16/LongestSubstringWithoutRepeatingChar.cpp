class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_set<char> set;
        int maxLen = 0;
        int left = 0;
        for (int right = 0; right < s.length(); right++)
        {
            // if its encountered unique character
            if (set.count(s[right]) == 0)
            {
                set.insert(s[right]);
                maxLen = max(maxLen, right - left + 1);
            }
            else
            {
                while (set.count(s[right]))
                {
                    set.erase(s[left]);
                    left++;
                }
                set.insert(s[right]);
            }
        }
        return maxLen;
    }
};