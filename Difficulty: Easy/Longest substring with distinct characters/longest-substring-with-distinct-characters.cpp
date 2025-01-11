//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
         unordered_set<char> a;
        int maxi = 0;
        int S = 0;
        
        for(int i=0;i<s.size();i++)
        {
            while(a.find(s[i])  != a.end())
            {
                a.erase(s[S]);
                S++;
            }
            
            a.insert(s[i]);
            
            maxi = max(maxi, i - S + 1);
        }
        
        return maxi;
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends