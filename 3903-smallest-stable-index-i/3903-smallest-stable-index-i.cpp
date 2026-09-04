class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n=nums.size();
        vector<int>min(n,nums[n-1]);
        for(int i=n-2;i>=0;i--){
            if(nums[i]<min[i+1]){
                min[i]=nums[i];
            }
            else{
                min[i]=min[i+1];
            }
        } 
        int high=nums[0];
        for(int i=0;i<nums.size();i++){
            high=max(high,nums[i]);
            int diff=high-min[i];
            if(diff<=k){
                return i;
            }
            
        }
        return -1;
        
    }
};