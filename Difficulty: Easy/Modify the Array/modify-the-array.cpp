// User function Template for C++

class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        // Complete the function
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]) {
                arr[i]=2*arr[i];
                arr[i+1]=0;
            }
        }
        int j=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
             j=i;
             break;
            } 
        }
        if(j==-1) return arr;
        for(int i=j+1;i<arr.size();i++){
          if(arr[i]!=0) {
              swap(arr[i],arr[j]);
              j++;
          }  
        }
        return arr;
    }
};
