class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
       priority_queue<long long>pq;
       for(int i=0;i<gifts.size();i++){
        pq.push(gifts[i]);
       }
       long long ans=0;
       while(k--){
         long long top=pq.top();
         pq.pop();
         pq.push(floor(sqrt(top)));
       }

     while(!pq.empty()){
        ans+=pq.top();
        pq.pop();
     }
     return ans;
    }
};