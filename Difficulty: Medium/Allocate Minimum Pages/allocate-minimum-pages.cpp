//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool ispos(vector<int>&arr,int k,int mid){
     
      int cnt=1;
      int sum=arr[0];
      for(int i=1;i<arr.size();i++){
          if(arr[i]+sum>mid){
              sum=arr[i];
                cnt++;
          }
          else{
              sum+=arr[i];
          }
      }
      return cnt<=k;
     
  }



    int findPages(vector<int> &arr, int k) {
        if(k>arr.size()) return -1;
        
        int mini=-1;
        
        int high=accumulate(arr.begin(),arr.end(),0);
        int low=*max_element(arr.begin(),arr.end());
        
        int n=arr.size();
       
        while(low<=high){
            int mid= (low+high)/2;
            if(ispos(arr,k,mid)){
                high=mid-1;
                mini=mid;
            }
            else low=mid+1;
        }
        return mini;    
        
    }


};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends