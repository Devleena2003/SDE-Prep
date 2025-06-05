class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int n=nums.size();
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    int ls=0,rs=sum;
    int start=0;
    int end=nums.size()-1;
    while(start<=end){
        rs-=nums[start];
        if(ls==rs) return start;
        ls+=nums[start];
        start++;

    }
  
return -1;
    }
};