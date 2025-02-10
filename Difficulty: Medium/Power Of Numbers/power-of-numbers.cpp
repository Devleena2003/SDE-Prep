//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int f(int n){
      int sum=0;
      while(n>0){
         sum=sum*10+n%10;
         n/=10;
      }
      
      return sum;
  }
    int reverseExponentiation(int n) {
        // code here
        int ans=1;
        int pow=f(n);
        for(int i=1;i<=pow;i++){
            ans=ans*n;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T; // test cases

    while (T--) {
        int n;
        cin >> n; // input N

        Solution ob;
        // power of the number to its reverse
        int ans = ob.reverseExponentiation(n);
        cout << ans << endl;
    }

    return 0;
}

// } Driver Code Ends