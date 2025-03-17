//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
   bool solve(const vector<int>& arr, int sum, int n, int i,vector<vector<int>>& t) {
    if (sum == 0) {
        return true;
    }
    if (i == n) {
        return false;
    }
    if (t[i][sum] != -1) {
        return t[i][sum];
    }
    bool notpick = solve(arr, sum, n, i + 1, t);
    bool pick = false;
    if (sum - arr[i] >= 0) {
        pick = solve(arr, sum - arr[i], n, i + 1, t);
    }
    return t[i][sum] = (pick || notpick);
}

bool isSubsetSum(const std::vector<int>& arr, int sum) {
    int n = arr.size();
    vector<vector<int>> t(n, vector<int>(sum + 1, -1));
    return solve(arr, sum, n, 0, t);
}
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends