class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count =0;
        for(int i=0;i<nums.size();i++){
            int number1=nums[i];
            for(int j=i;j<nums.size();j++){
                int number2=nums[j];
                if(abs(number1-number2)==k){
                    count ++;
                }
            }
        }
        return count;
    }
};