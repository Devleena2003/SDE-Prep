class Solution {
public:
int digSum(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
    int countLargestGroup(int n) {
       vector<int> sums(37);
        for (int i = 1; i <= n; i++) sums[digSum(i)]++;
        int maxi = 0, count = 0;
        for (int i : sums) 
            if (i > maxi) maxi = i, count = 1;
            else if (i == maxi) ++count;
        
        return count;  
    }
};