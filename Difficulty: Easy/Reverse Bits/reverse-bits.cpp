// User function Template for C++

class Solution {
  public:
    unsigned int reverseBits(unsigned int n) {
        // code here
       int ans =0 ;
        while(n){
              ans <<=1;
              if( n&1) ans +=1;
              n >>= 1;
         }
         return ans;
    }
};