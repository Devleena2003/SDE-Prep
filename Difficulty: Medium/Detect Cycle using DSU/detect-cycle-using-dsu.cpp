class Solution {
  public:
    // Function to detect cycle using DSU in an undirected graph.
    int find(int par[], int x){
        if(par[x]==x) return x;
        return par[x]=find(par,par[x]);
    }
    void unionSet(int par[],int x,int y){
        int x_par=find(par,x);
        int y_par=find(par,y);
        if(x_par==y_par) return ;
        par[x_par]=y_par;
        
    }
    int detectCycle(int V, vector<int> adj[]) {
        // Code here
        //making parent array
        int par[V];
        for(int i=0;i<V;i++){
           par[i]=i; 
        }
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                if(i<it){
                    int i_par=find(par,i);
                    int it_par=find(par,it);
                    if(i_par==it_par) return 1;
                    unionSet(par,i,it);
                }
            }
        }
      return 0;  
    }
};