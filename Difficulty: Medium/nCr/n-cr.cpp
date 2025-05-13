//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution{
public:
int m = 1e9+7;
    int f;
    
    int fact(int x){
        int ans = 1;
        for(int i =2;i<=x;i++)
            ans = (ans *1ll*i)%m;
        return ans;
            
    }
    int binexp(int a, int b){
        int ans =1;
        while(b>0){
            if(b&1)
                ans = (ans*1ll*a)%m;
                
            a = (a*1ll*a)%m;
            b =(b>>1);
        }
        return ans;
    }
    int nCr(int n, int r){
           if(r>n)
            return 0;
        if(n==r|| r==0)
            return 1;
         f = fact(n);
         int deno = (fact(r)*1ll*fact(n-r))%m;
         int dep = binexp(deno, m-2);
         int ans = (f*1ll*dep)%m;
         return ans;
        // code here
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;

        Solution ob;
        cout << ob.nCr(n, r) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends