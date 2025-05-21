class Solution {

  public:
    vector<int> downwardDiagonal(int N, vector<vector<int>> A) {
        // Your code goes here
        vector<int>ans;
        //upperward diagonal including main diagonal
        for(int i=0;i<N;i++){
            int start=0;
            int end=i;
            while(start<=i && end>=0){
                ans.push_back(A[start][end]);
                start++;
                end--;
            }
        }
        
        //for downward diagonal except main diagonal
        for(int i=1;i<N;i++){
            int start=i;
            int end=N-1;
            while(start<=N-1 && end>=i){
                ans.push_back(A[start][end]);
                start++;
                end--;
            }
        }
        
        return ans;
    }
};