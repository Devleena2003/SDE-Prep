
class Solution {
  public:
  int solve(int i, int j, int n,int m,vector<vector<int> >& matrix){
      int countOne=0;
      int countZero=0;
      
    int dx[8] = {-1,-1,-1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1,-1, 1,-1, 0, 1};
    for(int k=0;k<8;k++){
    int nx=i+dx[k];
    int ny=j+dy[k];
    if(nx >= 0 && nx < n && ny >= 0 && ny < m){
            if(matrix[nx][ny] == 0) countZero++;
        }
}
   if(countZero!=0 && countZero%2==0)   countOne++;
   return countOne;
  }
 
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int n=matrix.size();
        int m=matrix[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
                count+=solve(i,j,n,m,matrix);
                }
            }
        }
        return count;
    }
};