class Solution {
public:
    int longestPalindrome(vector<string>& words) {
      map<string,int>mp;
      bool flag=false;
      for(int i=0;i<words.size();i++){
        mp[words[i]]++;
      } 
      int res=0;
      for(int i=0;i<words.size();i++){
        string rev=words[i];
        reverse(rev.begin(),rev.end());
        if(rev!=words[i]){
        if(mp[words[i]]>0 && mp[rev]>0){
            mp[words[i]]--;
            mp[rev]--;
            res+=4;
        }
        } else{
           if(mp[words[i]]>=2){
            mp[words[i]]-=2;
            res+=4;
           } else if(mp[words[i]]==1 && flag==false){
              mp[words[i]]--;
              res+=2;
              flag=true;
           }
        }

      }
      return res; 
    }
};