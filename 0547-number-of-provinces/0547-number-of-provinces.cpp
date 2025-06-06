class Solution {
public:
void dfs(int node, vector<bool>&vis,vector<vector<int>>& isConnected ){
    vis[node]=true;
     for (int j = 0; j < isConnected.size(); ++j) {
            if (isConnected[node][j] == 1 && !vis[j]) {
                dfs(j,vis, isConnected);
            }
        }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int cc=0;
        int n=isConnected.size();
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
            cc++;
            dfs(i,vis,isConnected);
            }
        }
        return cc;
    }
};