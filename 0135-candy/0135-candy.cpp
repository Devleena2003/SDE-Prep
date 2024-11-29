class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> candies(n, 1);
        // forward checking
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) 
                candies[i] = candies[i - 1] + 1;
            
        }
        // backward check
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1])
                candies[i] = max(candies[i], candies[i + 1] + 1);
        }

        int total=0;
        for(auto it: candies){
            total+=it;
        }

        return total;
    }
};