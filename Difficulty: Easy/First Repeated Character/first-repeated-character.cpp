//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string firstRepChar(string s) {
        // code here.
        int arr[26] = {0};
        int len = s.length();
        string ans = "";
        for(int i=0;i<len;i++){
            if(arr[s[i]-97]==1){
                ans += s[i];
                return ans;
            }
            arr[s[i]-97] += 1;
        }
        return "-1";
    }
};

//{ Driver Code Starts.
//    Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.firstRepChar(str) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends