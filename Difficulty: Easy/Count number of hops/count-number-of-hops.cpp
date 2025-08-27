
class Solution {
  public:
  int f(int index){
      //base case:
      if(index==0) return 1;
      if(index<0) return 0;
     
      return f(index-1)+f(index-2)+f(index-3);
  }
    // Function to count the number of ways in which frog can reach the top.
    int countWays(int n) {

        // your code here
        return f(n);
    }
};
