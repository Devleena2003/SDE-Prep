//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    vector<int> common_digits(vector<int> nums) {
        // Code here
        int n;
        set<int>st;
       for(int i=0;i<nums.size();i++){
         n=nums[i];
         while(n!=0){
             int d=n%10;
             st.insert(d);
             n/=10;
         }
       } 
       
       vector<int>res(st.begin(),st.end());
       return res;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < nums.size(); i++)cin >> nums[i];
		Solution ob;
		vector<int> ans = ob.common_digits(nums);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	
cout << "~" << "\n";
}  
	return 0;
}
// } Driver Code Ends