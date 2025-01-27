class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
       int size=tasks.size();
       unordered_map<int,int>mp;
       for(auto it:tasks) mp[it]++;
       priority_queue<int>maxH;
       for(auto it:mp) maxH.push(it.second);

       queue<pair<int,int>>q;
       int t=0;
       while(!maxH.empty() || !q.empty()) {
        t++;
        if(maxH.size()>0){
            int curr=maxH.top();
            maxH.pop();
            int count=curr-1;
            if(count>0) q.push({count, t+n});
        }
        if(!q.empty() && q.front().second == t) {
                maxH.push(q.front().first);
                q.pop();
            }
       }
       return t; 
    }
};