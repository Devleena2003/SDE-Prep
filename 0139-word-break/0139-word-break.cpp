class Solution {
public:
bool f(string s, set<string>& st,int start, vector<int>&dp){
    if(start==s.size()) return true;
    if(dp[start]!=-1) return dp[start];
    for(int i=start;i<s.size();i++){
        if(st.count(s.substr(start,i-start+1))&& f(s,st,i+1,dp))
         return dp[start]= true;

    }
    return dp[start]=false;
}
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int>dp(s.size(),-1);
       set<string>st(wordDict.begin(),wordDict.end());
       return f(s,st,0,dp); 
    }
};