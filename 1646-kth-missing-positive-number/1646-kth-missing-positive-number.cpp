class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        for (int i = 0; i < n; i++) {
        if (arr[i] <= k) k++;  //k=9
        else break;
    }
    return k;
    }
};