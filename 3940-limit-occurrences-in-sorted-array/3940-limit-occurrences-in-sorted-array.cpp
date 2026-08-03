class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int>ans;
        for(auto&[key,count]:m){
            if(count>=k){
                for(int i=0;i<k;i++){
                    ans.push_back(key);
                }
            }
            else{
                for(int i=0;i<count;i++){
                    ans.push_back(key);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};