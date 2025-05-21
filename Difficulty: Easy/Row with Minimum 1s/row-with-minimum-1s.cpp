// User function Template for C++

class Solution {
  public:
    int minRow(vector<vector<int>> &Mat) {
        // code here
        int n=Mat.size();
        int m=Mat[0].size();
        int c;
        int mini=INT_MAX;
        int index=-1;
        for(int i=n-1;i>=0;i--){
            c=0;
            for(int j=m-1;j>=0;j--){
             if(Mat[i][j]==1)  c++;
            }
             if(c<=mini){
                 mini=c;
                 index=i+1;
                
             }
          
            
        }
        return index;
    }
};