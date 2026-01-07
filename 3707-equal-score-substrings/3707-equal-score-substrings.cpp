class Solution {
public:
    bool scoreBalance(string s) {
        int total=0;
      for(int i=0;i<s.size();i++){
        total+=s[i]-'a'+1;
      } 
      int left=0; 
     for(int i=0;i<s.size();i++){
        left+=s[i]-'a'+1;
        int right=total-left;
        if(left==right) return true;
     }
     return false;
    }
};