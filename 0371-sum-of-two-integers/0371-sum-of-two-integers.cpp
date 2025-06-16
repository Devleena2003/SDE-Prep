class Solution {
public:
    int getSum(int a, int b) {
        int x=a^b;
        int y=(a&b)<<1;
        while(y){
            int curr=(x&y)<<1;
            x=x^y;
            y=curr;
        }
        return x;
    }
};