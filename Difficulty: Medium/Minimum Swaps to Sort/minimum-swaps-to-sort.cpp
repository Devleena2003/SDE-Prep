class Solution {
  public:
    // Function to find the minimum number of swaps required to sort the array.
    int minSwaps(vector<int>& arr) {
       vector<pair<int,int>>v;
       for(int i=0;i<arr.size();i++){
           v.push_back({arr[i],i});
       }
       sort(v.begin(),v.end());
       int swaps=0;
      for(int i=0;i<v.size();i++){
          pair<int,int>p=v[i];
          int val=p.first;
          int ind=p.second;
          if(i!=ind){
              swaps++;
              swap(v[i],v[ind]);
              i--;
          }
         
          
      }
      return swaps;
    }
};