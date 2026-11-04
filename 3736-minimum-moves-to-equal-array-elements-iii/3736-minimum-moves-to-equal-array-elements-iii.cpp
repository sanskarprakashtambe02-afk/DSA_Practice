class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int target=nums[n-1];
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=abs(nums[i]-target);
        }
        return ans;
    }
};