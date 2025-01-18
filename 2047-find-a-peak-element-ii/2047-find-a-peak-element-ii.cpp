class Solution {
public:
int safe(vector<vector<int>>&mat, int i,int j){
    if(i<mat.size() && j<mat[0].size()) return mat[i][j];
    else return -1;
}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
       int n=mat.size();
       int m=mat[0].size();
       int i=n/2,j=m/2;
       while(true){
        int val=safe(mat,i,j);
        int top=safe(mat,i-1,j);
        int bottom=safe(mat,i+1,j);
        int left=safe(mat,i,j-1);
        int right=safe(mat,i,j+1);
        if(val>top && val>bottom && val>left && val>right) return{i,j};
          else if (top == max({top, bottom, left, right}))
                i--;
            else if (bottom == max({top, bottom, left, right}))
                i++;
            else if (left == max({top, bottom, left, right}))
                j--;
            else if (right == max({top, bottom, left, right}))
                j++;
       } 
       return {};
    }
};