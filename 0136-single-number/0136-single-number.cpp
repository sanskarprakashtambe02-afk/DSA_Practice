class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto&[key,count]:m){
            if(count ==1){
                return key;
            }
        }
        return -1;
    }
};