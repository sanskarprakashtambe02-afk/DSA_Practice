class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int>ans;
        for(auto&[key,count]:m){
            if(count>1){
                ans.push_back(key);
            }
        }
        return ans;
    }
};