class Solution {
  public:
  void dfs(int node, vector<int>&vis,vector<int>&comp,vector<int>adj[]){
      vis[node]=1;
      comp.push_back(node);
      for(auto it:adj[node]){
          if(!vis[it]){
              dfs(it,vis,comp,adj);
          }
      }
  }
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        // code here
        vector<int>vis(V,0);
        vector<int>adj[V];
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        vector<vector<int>>res;
        int count=0;
        for(int i=0;i<V;i++){
            
              if(!vis[i]) {
                vector<int>comp;
               dfs(i,vis,comp,adj);
               
               count++;
            res.push_back(comp);
           }
         
        }
       return res ;
    }
};
