// User function Template for C++

class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        if(st.empty()){
            st.push(x);
            return st;
        }
        int ele=st.top();
        st.pop();
        st=insertAtBottom(st, x);
        st.push(ele);
        return st;
    }
};