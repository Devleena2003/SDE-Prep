class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int ans =0 ;
        for(int i=0;i<32;i++){
              ans <<=1;
              if(( n&1)>0)
              ans ++;
              n >>= 1;
              
         }
         return ans;
    }
};