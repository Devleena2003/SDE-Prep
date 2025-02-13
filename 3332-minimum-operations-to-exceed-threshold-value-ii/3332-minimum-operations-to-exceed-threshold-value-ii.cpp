class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
      priority_queue<long long, vector<long long>, greater<long long>> minHeap(nums.begin(), nums.end()); // Use long long

    int count = 0;
    
    while (minHeap.size() > 1 && minHeap.top() < k) {
        long long x = minHeap.top(); minHeap.pop();
        long long y = minHeap.top(); minHeap.pop();
        
        long long new_val = min(x, y) * 2 + max(x, y); 
        minHeap.push(new_val);
        
        count++;
    }
    
    return (minHeap.top() >= k) ? count : -1;
    }
};