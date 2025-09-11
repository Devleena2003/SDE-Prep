class Solution {
public:
    int jump(vector<int>& nums) {
     int j=0,pos=0,dest=0;
     for(int i=0;i<nums.size()-1;i++){
       dest=max(dest,i+nums[i]);
       if(pos==i){
        pos=dest;
        j++;
       }
       if(pos>=(nums.size()-1))return j;

     }
     return 0;

    }
};