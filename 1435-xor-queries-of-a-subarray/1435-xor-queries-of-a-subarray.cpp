class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
     vector<int>ans;
        vector<int>pXor(arr.size());
        pXor[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            pXor[i]=pXor[i-1]^arr[i];
        }
        for(auto it:queries){
            int left=it[0];
            int right=it[1];
            if(left==0){
                ans.push_back(pXor[right]);
            }else{
                  ans.push_back(pXor[right]^pXor[left-1]);
            }
        }
       return ans;    
    }
};