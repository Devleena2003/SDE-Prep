class Solution {
public:
    string reverseWords(string s) {
      string temp = "";
    stack<string> st;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            temp += s[i];  
        } 
        else if (!temp.empty()) { 
            st.push(temp);
            temp = ""; 
        }
    }
    
  
    if (!temp.empty()) {
        st.push(temp);
    }

  
    string ans = "";
    while (!st.empty()) {
        ans += st.top(); 
        st.pop();
        if (!st.empty()) {  
            ans += " ";
        }
    }

    return ans;
    }
};