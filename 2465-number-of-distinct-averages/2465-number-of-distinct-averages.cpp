class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=0;
        int b=nums.size()-1;
        unordered_map<double,int>m;
        while(a<=b){
            double average=(nums[a]+nums[b])/2.0;
            m[average]++;
            a++;
            b--;
        }
        
        return m.size();
    }
};