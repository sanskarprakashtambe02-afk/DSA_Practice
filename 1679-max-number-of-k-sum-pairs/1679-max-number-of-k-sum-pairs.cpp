class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size()-1;
        sort(nums.begin(),nums.end());
        int ans=0;
        int st=0;
        int end=n;
        while(st<end){
            int sum=nums[st]+nums[end];
            if(sum==k){
                ans++;
                st++;
                end--;
            }
            if(sum<k){
                st++;
            }
            else if(sum>k){
                end--;
            }
        }
        return ans;
    }
};