//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        if(n==0 || n==1) return n;
        int start=1,end=n;
      
        int ans=-1;
        while(start<=end){
        int mid=(start+end)/2;
        if(mid*mid==n) return mid;
         if(mid*mid<n){
             start=mid+1;
             ans=mid;
         } 
         else end=mid-1;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends