// Function to locate the occurrence of the string x in the string s.
class Solution {
  public:
    int firstOccurence(string &txt, string &pat) {
        // Your code here
        int n=txt.length();
        int m=pat.length();
      for(int i=0;i<=n-m;i++){
       int j=0;
       while(j<m && txt[i+j]==pat[j]) j++;
       if(j==m) return i;
       
   }
   return -1;
    }
};