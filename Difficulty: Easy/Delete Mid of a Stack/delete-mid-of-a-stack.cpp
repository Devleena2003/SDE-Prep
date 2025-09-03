// User function template for C++

class Solution {
  public:
    // Function to delete middle element of a stack.
    void f(stack<int>&s, int n, int mid){
        if(n==mid){
          
           s.pop();
            return ;
        }
        int x=s.top();
        s.pop();
        f(s,n-1,mid);
        s.push(x);
    }
    void deleteMid(stack<int>& s) {
        // code here..
        int n=s.size();
        int mid=floor((s.size()+1)/2);
        f(s,n,mid);
        
    }
};