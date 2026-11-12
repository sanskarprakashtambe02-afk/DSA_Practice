class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1, dec = 1;
        int currinc = 1, currdec = 1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]>nums[i]){
                currinc++;
                dec=max(dec,currdec);
                currdec=1;
            }
            else if(nums[i+1]<nums[i]){
                currdec++;
                inc=max(inc,currinc);
                currinc=1;
            }
            else{
                currinc=1;
                currdec=1;
            }
            inc = max(inc, currinc);
            dec = max(dec, currdec);
        }
        return max(inc,dec);
    }
};