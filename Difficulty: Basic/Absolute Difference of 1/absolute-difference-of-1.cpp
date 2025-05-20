//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
  bool helper(int n){
      string s=to_string(n);
      for(int i=1;i<s.length();i++){
          if(abs(s[i]-s[i-1])!=1) return false;
      }
      
      return true;
  }
  
    vector<int> getDigitDiff1AndLessK(vector<int>& arr, int k) {
        // code here
        
        vector<int>res;
        for(int i=0;i<arr.size();i++){
            if(helper(arr[i])&& arr[i]>=10 && arr[i]<k) res.push_back(arr[i]);
        }
        
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.getDigitDiff1AndLessK(arr, k);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends