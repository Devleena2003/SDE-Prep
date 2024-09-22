class Solution {
public:
   void solve(int n, vector<string>&res,string s, int open,int close){
        if(open==n && close==n){
            res.push_back(s);
            return ;
        }
        if(open<n){
            solve(n,res,s+'(',open+1,close);
        }
        if(close<open){
            solve(n,res,s+')',open,close+1);
        }
    }
    vector<string> generateParenthesis(int n) {
      vector<string>res;
      string s="";
      solve(n,res,s,0,0);
      return res;  
    }
 
};