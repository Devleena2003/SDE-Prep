// User function Template for C++

class Solution {
  public:
  void dfs(int node,vector<int>&vis,  vector<vector<int>>adjList){
      vis[node]=1;
      for(auto it:adjList[node]){
          if(!vis[it]) dfs(it,vis,adjList);
      }
  }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<vector<int>>adjList(V);
        for(int i=0;i<adj.size();i++){
            for(int j=0;j<adj[0].size();j++){
                if(adj[i][j]==1){
                    adjList[i].push_back(j);
                }
            }
        }
        vector<int>vis(V,0);
        int c=0;
        for(int i=0;i<V;i++){
           if(!vis[i]){
               c++;
               dfs(i,vis,adjList); 
           } 
        }
        return c;
    }
};