class Solution {
public:
int f(vector<int>& nums, int mid){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=ceil((double)(nums[i])/(double)(mid));
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=(low+high)/2;
            int div=f(nums,mid);
            if(div>threshold) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};