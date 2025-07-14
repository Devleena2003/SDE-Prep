class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        string res="";
     for(int i=0;i<num.length();i++){
        while(!st.empty() && k>0 && st.top()>num[i]){
            st.pop();
            k--;
        }
     
        
        st.push(num[i]);

     }
        //if only one number
     while(!st.empty() && k>0){
            st.pop();
            k--;
        }
   while(!st.empty()){
    res+=st.top();
    st.pop();
   }
     reverse(res.begin(),res.end());
     while(!res.empty() && res[0]=='0')  res.erase(0,1);
     if(res.empty()) res="0";

     return res;
    }
};