class Solution {
public:
int f(vector<int>& weights, int cap){
    int loads=0;
  int days=1;
    for(int i=0;i<weights.size();i++){
        if(loads+weights[i]>cap){
          days++;
          loads=weights[i];
        }
        else{
            loads+=weights[i];
        }
    }
    return days;
}
    int shipWithinDays(vector<int>& weights, int days) {
      int low=*max_element(weights.begin(),weights.end()) ;
      int high=accumulate(weights.begin(),weights.end(),0);
      while(low<=high){
        int mid=(low+high)/2;
        int count=f(weights,mid);
        if(count<=days) high=mid-1;
        else low=mid+1;
      } 
      return low;
    }
};