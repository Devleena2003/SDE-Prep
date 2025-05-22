
class Solution {
  public:
    string encode(string s) {
        // code here
        string ans="";
        int c=1;
        char last=s[0];
        for(int i=1;i<s.length();i++){
            if(s[i]==last) c++;
            else{
                ans+=last;
                ans+=to_string(c);
                c=1;
                last=s[i];
            }
            
        }
         ans+=last;
        ans+=to_string(c);
        return ans;
    }
};
