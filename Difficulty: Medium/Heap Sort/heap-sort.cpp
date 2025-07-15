// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

class Solution {
  public:
    // Function to sort an array using Heap Sort.
    void heapify(vector<int>&arr, int i, int n){
        int l=i;
        int left=2*i+1;
        int right=2*i+2;
        if(left<n && arr[l]<arr[left])l=left;
        if(right<n && arr[l]<arr[right]) l=right;
        if(l!=i){
            swap(arr[l],arr[i]);
            heapify(arr,l,n);
        }
    }
    void heapSort(vector<int>& arr) {
        // code here
        int n=arr.size();
      for(int i=n/2-1;i>=0;i--){
          heapify(arr,i,n);
      }
      
      for(int i=n-1;i>=0;i--)
      {
          swap(arr[i],arr[0]);
          heapify(arr,0,i);
      }
    }
};