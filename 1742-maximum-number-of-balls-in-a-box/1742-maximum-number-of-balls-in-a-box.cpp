class Solution {
public:
int sumOfDigits(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
    int countBalls(int lowLimit, int highLimit) {
        map<int,int>mp;
        int maxi=INT_MIN;
        for(int i=lowLimit;i<=highLimit;i++){
           int digitSum=sumOfDigits(i);
           mp[digitSum]++;
        }
        for(auto it:mp){
            if(maxi<it.second) maxi=it.second;
        }
        return maxi;
    }
};