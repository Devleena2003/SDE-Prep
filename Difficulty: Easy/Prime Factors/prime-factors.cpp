//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	
	bool isPrime(int i){
	    int count=0;
	    for(int j=1;j<=i;j++){
	        if(i%j==0) count++;
	    }
	    
	    if(count==2) return true;
	    return false;
	}
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    vector<int>ans;
	    for(int i=1;i<=N;i++){
	       if(N%i==0) {
	           if(isPrime(i)) ans.push_back(i);
	       }
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	
cout << "~" << "\n";
}  
	return 0;
}
// } Driver Code Ends