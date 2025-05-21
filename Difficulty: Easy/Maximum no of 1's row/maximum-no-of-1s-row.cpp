class Solution {
  public:
    int maxOnes(vector<vector<int>> &Mat, int N, int M) {
        // your code here
        int n=Mat.size();
        int m=Mat[0].size();
        int c;
        int maxi=0;
        int index=-1;
        for(int i=0;i<n;i++){
            c=0;
            for(int j=0;j<m;j++){
             if(Mat[i][j]==1) {
                 c++;
             } 
             if(c>maxi){
                 maxi=c;
                 index=i;
             }
            }
            
        }
        return index;
    }
};