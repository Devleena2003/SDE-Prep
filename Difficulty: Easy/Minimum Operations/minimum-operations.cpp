class Solution {
  public:
  int solve(int n,int c){
      if(n==0) return c;
      if(n%2==0) return solve(n/2,c+1);
      else  return solve(n-1,c+1);
  }
    int minOperation(int n) {
        // code here.
       return solve(n,0);
       
    }
};