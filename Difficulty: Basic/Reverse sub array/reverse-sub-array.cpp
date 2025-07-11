//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    vector<int> reverseSubArray(vector<int> &arr, int l, int r) {
        // code here
        l--;
        r--;
        reverse(arr.begin()+l,arr.begin()+r+1);
        
        return arr;
    }

};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ls;
        getline(cin, ls);
        int l = stoi(ls);
        string rs;
        getline(cin, rs);
        int r = stoi(rs);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.reverseSubArray(arr, l, r);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends