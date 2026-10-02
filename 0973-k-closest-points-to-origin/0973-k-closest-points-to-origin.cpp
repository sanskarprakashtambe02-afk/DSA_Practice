class Solution {
public:
    struct comp_dis{
        bool operator()(const vector<int>&a, const vector<int>& b ){
            int disA=(a[0]*a[0]+a[1]*a[1]);
            int disB=(b[0]*b[0]+b[1]*b[1]);

            return disA>disB;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>,vector<vector<int>>,comp_dis>pq;
        for(int i=0;i<points.size();i++){
            pq.push(points[i]);
        }
        vector<vector<int>>ans;
        for(int i=0;i<k;i++){
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};