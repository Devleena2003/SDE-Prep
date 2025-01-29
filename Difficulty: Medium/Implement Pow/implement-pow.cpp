//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    double power(double b, int e) {
        // code here
        if(e==0) return 1.0;
        if(e==1) return b;
        if(b==0) return 0.0;
        double ans=1.0;
        if(e<0){
           b=1/b;
        }
        e=abs(e);
        while(e>0){
            if(e%2){
                ans=ans*b;
                e=e-1;
            }
            if(e%2==0){
               b=b*b;
               e/=2;
                
            }
        }
        
    
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    cout << fixed << setprecision(5);
    int t;
    cin >> t;
    while (t--) {
        double b;
        cin >> b;
        int e;
        cin >> e;
        Solution ob;
        cout << ob.power(b, e) << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends