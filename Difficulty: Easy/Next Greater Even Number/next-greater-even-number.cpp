class Solution {
  public:
    long long getNextEven(string x) {
        // Your code goes here
        
        string ans=x;
        int n= ans.length();
        while(next_permutation(ans.begin(),ans.end())){
            if((ans[n-1]-'0')%2==0) return stoll(ans);
        }
        
        return -1;
    }
};