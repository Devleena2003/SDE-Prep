// User function Template for C++

class Solution {
  public:
  void f(stack<int>&St, int ele){
      if(St.empty()){
          St.push(ele);
          return ;
      }
      int top=St.top();
      St.pop();
      f(St,ele);
      St.push(top);
  }
    void Reverse(stack<int> &St) {
        if(St.empty()) return ;
        int top=St.top();
        St.pop();
        Reverse(St);
        f(St,top);
    }
};