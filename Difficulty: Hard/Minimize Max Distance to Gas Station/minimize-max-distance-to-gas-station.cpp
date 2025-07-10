class Solution {
  public:
  bool isPossible(vector<int> &stations, int k,double mid){
      int req=0;
      for(int i=0;i<stations.size()-1;i++){
          double gap=stations[i+1]-stations[i];
          req+=int(ceil((gap/mid)-1));
          
      }
      if(req>k) return false;
      return req<=k;
  }
    double findSmallestMaxDist(vector<int> &stations, int k) {
        // Code here
        double low=0.0;
        double high=0.0;
        for(int i=0;i<stations.size()-1;i++){
            high=max(high,double(stations[i+1]-stations[i]));
        }
        double dist=1e-9;
        while(high-low>dist){
            double mid=(low+high)/2.0;
            if(isPossible(stations,k,mid)) high=mid;
            else low=mid;
        }
        return round(high*100.0)/100.0;
    }
};