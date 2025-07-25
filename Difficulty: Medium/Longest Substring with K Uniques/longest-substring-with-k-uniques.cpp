class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int maxi=-1;
        map<char,int>mp;
        int i=0;
        for(int j=0;j<s.length();j++){
            mp[s[j]]++;
            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0) mp.erase(s[i]);
                i++;
            }
            
            if(mp.size()==k){
                maxi=max(maxi,j-i+1);
            }
        }
        return maxi;
    }
};