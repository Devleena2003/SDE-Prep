class Solution {
public:
    int sum(int num1, int num2) {
        int x=num1^num2;
        int y=(num1&num2)<<1;
        while(y){
            int c=(x&y)<<1;
            x^=y;
            y=c;
        }
        return x;
    }
};