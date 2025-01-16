//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        unordered_map<int, int> prefixSumIndex; 
    int maxLength = 0;
    int prefixSum = 0;


    for (int i = 0; i < arr.size(); i++) {
      
        prefixSum += (arr[i] == 0) ? -1 : 1;

       
        if (prefixSum == 0) {
            maxLength = max(maxLength, i + 1);
        }

       
        if (prefixSumIndex.find(prefixSum) != prefixSumIndex.end()) {
            maxLength = max(maxLength, i - prefixSumIndex[prefixSum]);
        } else {
          
            prefixSumIndex[prefixSum] = i;
        }
    }

    return maxLength;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore(); // To ignore the newline character after reading T

    while (T--) {
        string line;
        getline(cin, line); // Read the whole line for the array

        // Convert the line into an array of integers
        stringstream ss(line);
        vector<int> a;
        int num;
        while (ss >> num) {
            a.push_back(num);
        }

        // Create the solution object
        Solution obj;

        // Call the maxLen function and print the result
        cout << obj.maxLen(a) << endl;
    }

    return 0;
}
// } Driver Code Ends