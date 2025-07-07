class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        int n=arr.size();
        arr.push_back(0);
        for(int i=0;i<n;i++){
            while(arr[i]>0 && arr[i]<=n && arr[i]!=arr[arr[i]]){
              swap(arr[i],arr[arr[i]]);  
            }
        }
        for(int i=1;i<=n;i++){
            if(arr[i]!=i) return i;
        }
        return n+1;
    }
};