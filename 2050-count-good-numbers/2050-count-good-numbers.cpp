class Solution {
public:
 
       long long power(long long x, long long y, int mod) {
        if(y == 0)
            return 1;
        
       long long ans = power(x, y/2, mod);
        
        if(y % 2 == 0)
           
            return (ans * ans) % mod;
        
        else
            
            return (((ans * ans) % mod) * x) % mod;
        
    }
    
    int countGoodNumbers(long long n) {
       
        int mod = 1e9+7;
        long long even=(n/2)+(n%2);
        long long odd=(n/2);
        return (power(5, even, mod) * power(4, odd, mod)) % mod;
    }
};
    
