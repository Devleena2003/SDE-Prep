//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int firstO(int x, vector<int>&arr){
      int low=0;
      int high=arr.size()-1;
      int ans=-1;
      while(low<=high){
          int mid=low+(high-low)/2;
          if(arr[mid]==x){
              ans=mid;
              high=mid-1;
          }
          else if(arr[mid]<x){
              low=mid+1;
          }
          else high=mid-1;
          
      }
      return ans;
  }
    int lastO(int x, vector<int>&arr){
      int low=0;
      int high=arr.size()-1;
      int ans=-1;
      while(low<=high){
          int mid=low+(high-low)/2;
          if(arr[mid]==x){
              ans=mid;
              low=mid+1;
          }
          else if(arr[mid]<x){
              low=mid+1;
          }
          else high=mid-1;
          
      }
      return ans;
  }
    vector<int> firstAndLast(int x, vector<int> &arr) {
        // Code here
    vector<int>ans;
        int f=firstO(x, arr);
        int l=lastO(x,arr);
         if(f == -1)
       ans.push_back(-1);
       else{
       ans.push_back(f);
       ans.push_back(l);
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int x;
        cin >> x;
        cin.ignore();

        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> ans = obj.firstAndLast(x, arr);
        for (int i : ans) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends