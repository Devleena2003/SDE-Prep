// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        set<char>st;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(st.find(s[i])==st.end()) {
                ans+=s[i];
                st.insert(s[i]);
            }
        }
        return ans;
    }
};