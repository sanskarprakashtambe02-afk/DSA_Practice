class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>max;
        max.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]>max[i-1]){
                max.push_back(nums[i]);
            }
            else{
                max.push_back(max[i-1]);
            }
        }
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
        vector<int>diff;
        for(int i=0;i<n;i++){
            int ans=max[i]-min[i];
            if(ans<=k){
                return i;
            }
        }
        return -1;
        
    }
};