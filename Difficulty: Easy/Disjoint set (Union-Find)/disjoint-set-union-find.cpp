/*Complete the functions below*/
int find(int par[], int x) {
    // add code here
    //we find the parent
    if(par[x]==x) return x;
    return par[x]=find(par,par[x]);
}

void unionSet(int par[], int x, int z) {
    // add code here.
    int x_par=find(par,x);
    int y_par=find(par,z);
    if(x_par!=y_par){
       par[x_par]=y_par;
       return ;
    }
}