class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        //space optimized method
        bool firstRow=false;
        bool firstCol=false;
        int n=mat.size();
        int m=mat[0].size();
        for(int j=0;j<m;j++){
            if(mat[0][j]==0) firstRow=true;
        }
        for(int i=0;i<n;i++){
            if(mat[i][0]==0) firstCol=true;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(mat[i][j]==0){
                    mat[0][j]=0;
                    mat[i][0]=0;
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(mat[0][j]==0 || mat[i][0]==0) mat[i][j]=0;
            }
        }
        if(firstRow){
            for(int j=0;j<m;j++){
                mat[0][j]=0;
            }
        }
         if(firstCol){
            for(int i=0;i<n;i++){
                mat[i][0]=0;
            }
        }

    }
};