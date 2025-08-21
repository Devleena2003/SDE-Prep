class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int totalgas = 0;
        int totalcost = 0;
        int remgas = 0;
        int front = 0;
        

        for (int i = 0; i < n; i++) {
            totalgas += gas[i];
            totalcost += cost[i];
            remgas += gas[i] - cost[i];

            if (remgas < 0) {
                front = i + 1;
                remgas = 0;
            }
        }
        return totalgas >= totalcost ? front : -1;
    }
};