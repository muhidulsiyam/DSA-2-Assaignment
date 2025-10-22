class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty()) return 0;
        sort(points.begin(), points.end());
        int a = 1;
        int minEnd = points[0][1];
        for (int i = 1; i < points.size(); i++){
            if (points[i][0] > minEnd) {
                a++;
                minEnd = points[i][1];
            } else {
                minEnd = min(minEnd, points[i][1]);
            }
        }
        return a;
    }
};
