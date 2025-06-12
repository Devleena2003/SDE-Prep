class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
      vector<vector<int>>dist(mat.size(),vector<int>(mat[0].size(), 0));
      vector<vector<int>>vis(mat.size(),vector<int>(mat[0].size(), 0));
      queue<pair<pair<int,int>,int>>q;
      for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            if(mat[i][j]==0){
             vis[i][j]=1;
             q.push({{i,j},0});
            }
            else{
                vis[i][j]=0;
            }
        }
      } 
      int dx[4]={1,-1,0,0};
      int dy[4]={0,0,1,-1};
      while(!q.empty()){
        int steps=q.front().second;
        int x=q.front().first.first;
        int y=q.front().first.second;
        q.pop();
        dist[x][y]=steps;
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
if(nx>=0 && nx<mat.size() && ny>=0 && ny<mat[0].size() &&!vis[nx][ny]) {
    vis[nx][ny]=1;
    q.push({{nx,ny},steps+1});
}
        }
      } 
      return dist;
    }
};