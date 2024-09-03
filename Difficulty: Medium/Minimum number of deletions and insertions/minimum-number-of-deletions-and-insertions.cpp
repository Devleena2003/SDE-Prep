//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	int minOperationsUtil(string& str1, string& str2, int i, int j, vector<vector<int>>& memo) {
    // Base cases
    if (i == 0) return j; // If str1 is empty, all characters of str2 need to be inserted
    if (j == 0) return i; // If str2 is empty, all characters of str1 need to be deleted

    // If the result is already computed, return it
    if (memo[i][j] != -1) return memo[i][j];

    // If characters match, no operation needed, move diagonally
    if (str1[i - 1] == str2[j - 1]) {
        memo[i][j] = minOperationsUtil(str1, str2, i - 1, j - 1, memo);
    } else {
        // If characters don't match, find the minimum of insert, delete, or replace
        memo[i][j] = 1 + min(minOperationsUtil(str1, str2, i - 1, j, memo),    // Delete
                             minOperationsUtil(str1, str2, i, j - 1, memo));   // Insert
    }

    return memo[i][j];
}	

	public:
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	      int n = str1.size(), m = str2.size();
    vector<vector<int>> memo(n + 1, vector<int>(m + 1, -1)); // Initialize memo table with -1
    return minOperationsUtil(str1, str2, n, m, memo);
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends