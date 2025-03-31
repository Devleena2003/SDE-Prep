class Solution {
public:
    long long putMarbles(vector<int>& a, int k) {
    int n=a.size();
        long long maxi=0,mini=0;
        priority_queue<int>max_pq;
        priority_queue<int,vector<int>,greater<int>>min_pq;
        for(int i=0;i<n-1;i++){
            max_pq.push(a[i]+a[i+1]);
            min_pq.push(a[i]+a[i+1]);
        }
        k--;
        while(k>0){
            maxi+=max_pq.top();
            max_pq.pop();
            mini+=min_pq.top();
            min_pq.pop();
            k--;
        }
        return maxi-mini; 
    }
};