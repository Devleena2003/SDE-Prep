// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int>temp;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                temp.push_back(Mat[i][j]);
            }
        }
        sort(temp.begin(),temp.end());
        int index=0;
           for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
               Mat[i][j]=temp[index];
               index++;
            }
        }
        return Mat;
    }
};