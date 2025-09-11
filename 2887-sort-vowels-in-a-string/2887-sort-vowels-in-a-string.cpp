class Solution {
public:
bool isVowel(char ch){
    if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u' ||ch=='A' ||ch=='E'||ch=='I'||ch=='O'||ch=='U') return true;
    else return false;
}
    string sortVowels(string s) {
     string t="";
     vector<char>temp;
     for(int i=0;i<s.size();i++){
        if(isVowel(s[i])) temp.push_back(s[i]);

     } 
     if(temp.empty())  return s; 
     int index=0;
     sort(temp.begin(),temp.end());
     for(int i=0;i<s.size();i++){
          if(!isVowel(s[i])) t+=s[i];
          else{
            t+=temp[index];
            index++;
          }
     }
     return t;
    }
};