class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>val;
        int n=grid.size();
        int m=grid[0].size();
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            val.push_back(grid[i][j]);
        }
       }
       sort(val.begin(),val.end());
        int t=val[val.size()/2];
        long long totalOp=0;
        for(int i=0;i<val.size();i++){
            int temp=abs(val[i]-t);
            if(temp%x!=0) return -1;
            totalOp+=temp/x;
        }
        return totalOp;
    }
};