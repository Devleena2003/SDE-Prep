class Solution {
public:
static bool cmp(const pair<int,int>&a, const pair<int,int>&b){
    return a.second>b.second;
}
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n=plantTime.size();
        vector<pair<int,int>>res(n);
        for(int i=0;i<n;i++){
            res[i]={plantTime[i],growTime[i]};
        }
        sort(res.begin(),res.end(),cmp);
        int maxD=0;
        int prev=0;
        for(auto it:res){
         prev+=it.first;
         maxD=max(maxD,prev+it.second);
        }
        return maxD;
    }
};