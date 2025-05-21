// User function Template for C++
class Solution {
  public:
    long long leftCandies(long long n, long long m) {
        // code here
        int i=1;
        while(m>=i){
          m-=i;
          i++;
          if(i>n) i=1;
        }
        
        return m;
    }
};