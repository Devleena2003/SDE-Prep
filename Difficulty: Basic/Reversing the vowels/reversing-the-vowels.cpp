class Solution {
  public:
  bool isVowel(char c){
      if(c=='e'||c=='a'||c=='i'|| c=='o'||c=='u') return true;
      else return false;
      
  }
string modify(string& s){
    // code here.
    int i=0;
    int j=s.length()-1;
    while(i<j){
       if(!isVowel(s[i])) i++;
       else if(!isVowel(s[j])) j--;
       else{
           swap(s[i++],s[j--]);
       }
    }
    return s;
}

}
;