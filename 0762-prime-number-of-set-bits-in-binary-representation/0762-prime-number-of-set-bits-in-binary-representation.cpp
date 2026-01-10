class Solution {
public:
int countSetBit(int n){
    int count=0;
    for(int i=0;i<32;i++){
        if(n&(1<<i)) count++;
    }
    return count;
}
bool isPrime(int n){
    if(n<2) return false;
    int j=0;
    for(int i=1;i<=n;i++){
      if(n%i==0) j++;
    }
    if(j==2)return true;
    else return false;
}
    int countPrimeSetBits(int left, int right) {
        int ans=0;
       for(int i=left;i<=right;i++){
        int c=countSetBit(i);
        if(isPrime(c))ans++;
       } 

       return ans;
    }
};