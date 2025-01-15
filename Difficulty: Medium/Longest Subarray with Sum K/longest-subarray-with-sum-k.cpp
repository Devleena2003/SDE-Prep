//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
         int preSum = 0;
        int maxlen = 0;
        unordered_map<int, int> mpp;

        for (int i = 0; i < arr.size(); i++) {
            preSum += arr[i];

          
            if (preSum == k) {
                maxlen = max(maxlen, i + 1);
            }

           
            int remove = preSum - k;
            if (mpp.find(remove) != mpp.end()) {
                int len = i - mpp[remove];
                maxlen = max(maxlen, len);
            }

          
            if (mpp.find(preSum) == mpp.end()) {
                mpp[preSum] = i;
            }
        }

        return maxlen;
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends