class Solution {
  public:
    int digitalRoot(int n) {
        // code here
        if(n==0) return 0;
        int sum=0;
        sum+=digitalRoot(n/10)+n%10;
        if(sum>=10) return digitalRoot(sum);
        else return sum;
    }
};