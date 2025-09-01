class Solution {
public:
 double diff(int pass, int total) {
        double oldRatio = (double)pass / total;
        double newRatio = (double)(pass + 1) / (total + 1);
        return newRatio - oldRatio;
    }
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
       priority_queue<vector<double>> pq;
        for (auto &c : classes) {
            double g = diff(c[0], c[1]);
            pq.push({g, (double)c[0], (double)c[1]});
        }

        // Assign extra students one by one
        while (extraStudents--) {
            auto top = pq.top();
            pq.pop();
            double p = top[1];
            double t = top[2];

            // Add one extra student
            p += 1;
            t += 1;

            // Push updated class back into heap with new gain
            pq.push({diff(p, t), p, t});
        }

        // Compute final average pass ratio
        double totalRatio = 0.0;
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            totalRatio += top[1] / top[2];
        }

        return totalRatio / classes.size();
    }
};