class Solution {
public:
void dfs(int i,int j, int n, int m,vector<vector<int>>& board){
if(i<0 || i>=n || j<0 || j>=m ||board[i][j]!=1) return ;
board[i][j]=0;
dfs(i-1,j,n,m,board);
dfs(i+1,j,n,m,board);
dfs(i,j-1,n,m,board);
dfs(i,j+1,n,m,board);
}
    int numEnclaves(vector<vector<int>>& board) {
       int n=board.size();
        int m=board[0].size();
        //check boudaries
        for(int i=0;i<n;i++){
            if(board[i][0]==1) dfs(i,0,n,m,board);
            if(board[i][m-1]==1) dfs(i,m-1,n,m,board);
        }
        for(int j=0;j<m;j++){
            if(board[0][j]==1) dfs(0,j,n,m,board);
            if(board[n-1][j]==1) dfs(n-1,j,n,m,board);
        }
        int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]==1) count++;
        }
    }  
    return count;
    }
};