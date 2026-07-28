class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>>res(n,vector<int>(n,0));
      int top=0;
      int left=0;
      int right=n-1;
      int bottom=n-1;
      int num=1;
      while(left<=right && top<=bottom){
        //left to right
        for(int i=left;i<=right;i++){
            res[top][i]=num++;
        }
        top++;
        //top to bottom
       if(left<=right){
        for(int i=top;i<=bottom;i++ ){
            res[i][right]=num++;
        }
        right--;
       }
       //right to left
       if(top<=bottom){
        for(int i=right;i>=left;i--){
            res[bottom][i]=num++;
        }
        bottom--;

       }

       // bottom to top

       for(int i=bottom;i>=top;i--){
        res[i][left]=num++;
       }
       left++;
      }
      return res;
    }
};