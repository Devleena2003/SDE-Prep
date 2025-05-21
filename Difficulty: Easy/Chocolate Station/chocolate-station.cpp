
class Solution {
  public:
    int getChocolateCost(vector<int> arr, int price) {
        // code here
        int n=arr.size();
        int bal=0;
        int buy=arr[0];
    for(int i = 1; i < n; i++) {
            int diff = arr[i-1] - arr[i];

            if(diff >= 0) {
                // Gain chocolates
                bal += diff;
            } else {
                // Need extra chocolates
                int needed = -diff;

                if(bal >= needed) {
                    // Use existing chocolates
                    bal -= needed;
                } else {
                    // Not enough balance, buy the rest
                    buy += (needed - bal);
                    bal = 0;
                }
            }
        }

        return buy * price;
    }
};