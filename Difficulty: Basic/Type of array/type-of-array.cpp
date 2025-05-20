//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxNtype(vector<int>& arr) {
        // code here.
        int n=arr.size();
        int maxi_index=0;
        int min_index=0;
        for(int i=0;i<n;i++){
            if(arr[i]>arr[maxi_index]) maxi_index=i;
            if(arr[i]<arr[min_index]) min_index=i;
            
        }
        
        if(maxi_index==n-1) return 1;
        if(min_index==n-1) return 2;
        if(min_index<maxi_index) return 3;
        if(min_index>maxi_index) return 4;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.maxNtype(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends