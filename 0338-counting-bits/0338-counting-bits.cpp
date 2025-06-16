class Solution {
public:
int f(int n){
    int c=0;
    while(n){
     if(n&1) c++;
     n=n>>1;
    }
    return c;
}
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
          int res= f(i);
          ans.push_back(res);
        }
        return ans;
    }
};