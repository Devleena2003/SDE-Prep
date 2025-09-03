class Solution {
  public:
    vector<long long>ans;
    vector<long long> jugglerSequence(long long n) {
        // code here
       
        ans.push_back(n);
        if(n==1) return ans;
        if(n%2!=0){
           return jugglerSequence((long long)pow(n, 1.5));  // n^(3/2)
        } 
        else {
           return jugglerSequence((long long)pow(n, 0.5));  // n^(1/2)
        }
       
    }
};