class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string>ans;
        vector<string>res;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                temp+=s[i];
            }else{
                res.push_back(temp);
                temp="";
            }
        }
         res.push_back(temp);
        temp="";
        int maxLen=0;
        for(string it: res){
          if(it.size()>maxLen) maxLen=it.size();
        }
        for(int i=0;i<maxLen;i++){
            for(int j=0;j<res.size();j++){
                if(i<res[j].size()){
                  temp+=res[j][i];
                }
                else{
                    temp+=' ';
                }
            }
            while(!temp.empty() && temp.back()==' ') temp.pop_back();
            ans.push_back(temp);
            temp="";

        }
        return ans;
    }
};