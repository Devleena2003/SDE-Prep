class Solution {
public:
    int divide(int dividend, int divisor) {
       if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;

    // Convert to long to avoid overflow and take abs()
    long a = labs(dividend);
    long b = labs(divisor);
    long result = 0;

    // From high bit to low
    for (int i = 31; i >= 0; i--) {
        if ((a >> i) >= b) {
            result += 1LL << i;     // add 2^i
            a -= b << i;            // subtract divisor * 2^i from dividend
        }
    }

    // Apply sign
    if ((dividend < 0) != (divisor < 0))
        result = -result;

    return result;
    }
};