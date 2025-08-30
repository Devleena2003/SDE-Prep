class Solution {
public:
    int maximum69Number (int num) {
     int n=num;
     int lastSix=0;
     int mul=1;
     while(n!=0){
      int digit=n%10;
      if(digit==6) lastSix=mul;
      mul*=10;
      n/=10;
     }
     if(lastSix==0) return num;
     return num+3*lastSix;
    }
};