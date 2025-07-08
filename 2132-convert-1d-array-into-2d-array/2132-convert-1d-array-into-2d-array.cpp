class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(original.size()!=m*n) return {};
        vector<vector<int>>res(m,vector<int>(n));
         for(int i=0;i<m*n;i++){
            int r=i/n;
            int c=i%n;
            res[r][c]=original[i];
         }
         return res;
    }
};