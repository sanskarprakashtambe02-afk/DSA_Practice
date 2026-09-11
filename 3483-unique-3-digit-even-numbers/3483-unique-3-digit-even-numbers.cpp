class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int>ans;
        int n=digits.size();
        for(int i=0;i<n;i++){
            if(digits[i]==0)continue;
            for(int j=0;j<n;j++){
                if(i==j)continue;
                for(int k=0;k<n;k++){
                    if(i==k||k==j)continue;
                    int number=100*digits[i]+10*digits[j]+digits[k];
                    ans.insert(number);
                }
            }
        }
        int uttar=0;
        vector<int>nums(ans.begin(),ans.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                uttar++;
            }
        }
        return uttar;
    }
};