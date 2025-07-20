class Solution {
  public:
  int f(string &s, int l, int r){
      while(l>=0 && r<s.size() && s[l]==s[r]){
          l--;
          r++;
      }
      return r-l-1;
  }
    string longestPalindrome(string &s) {
        // code here
    int maxl=0;
    int start=0;
    for(int i=0;i<s.size();i++){
        int len1=f(s,i,i);
        int len2=f(s,i,i+1);
        int len=max(len1,len2);
        if(len>maxl){
            maxl=len;
            start=i-(len-1)/2;
        }
    }
    return s.substr(start,maxl);
    }
};