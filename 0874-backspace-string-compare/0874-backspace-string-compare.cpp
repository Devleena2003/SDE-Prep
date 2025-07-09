class Solution {
public:
string process(string s){
    string res="";
    for(auto it:s){
        if(it!='#') res+=it;
        else{
            if(!res.empty()) res.pop_back();
        }
    }
    return res;
}
    bool backspaceCompare(string s, string t) {
      if(process(s)==process(t))   return true;
      else return false;
    }
};