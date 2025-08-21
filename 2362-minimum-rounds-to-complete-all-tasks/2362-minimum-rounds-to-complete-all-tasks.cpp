class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
       map<int,int>mp;
       for(int i: tasks){
        mp[i]++;
       }
       int r=0;
       for(auto it:mp){
        if(it.second==1) return -1;
        if(it.second%3==0) r+=(it.second/3);
        else r+=(it.second/3)+1;
       }
       return r; 
    }
};