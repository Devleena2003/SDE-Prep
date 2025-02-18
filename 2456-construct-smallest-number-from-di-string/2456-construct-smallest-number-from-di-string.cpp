class Solution {
public:
    string smallestNumber(string pattern) {
       stack<int>st;
       string res="";
       for(int i=0;i<=pattern.length();i++){
        st.push(i+1);
        if(pattern[i]=='I' || i==pattern.length() ){
          while(!st.empty()){
           res+=to_string(st.top());
           st.pop();
          } 
        }
       } 

       return res;
    }
};