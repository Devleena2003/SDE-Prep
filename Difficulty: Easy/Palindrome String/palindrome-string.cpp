class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        int i=0;
        int n=s.length()-1;
       ;
        while(i<=n/2){
           if(s[i]!=s[n-i]) return false;
           i++;
        }
        
        return true;
    }
};