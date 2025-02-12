class Solution {
public:

    int maximumSum(vector<int>& nums) {
         int map[82] = {}, res = -1;
        for (int i = 0; i < nums.size(); i++){
            int sum = 0, num = nums[i];
            while (num > 0){
                sum += (num % 10);
                num /= 10;
            }
            if (map[sum] != 0){
                res = max(res, nums[i] + map[sum]);
                map[sum] = max(map[sum], nums[i]);
            }
            else map[sum] = nums[i];
        }
        return res;
          }
};