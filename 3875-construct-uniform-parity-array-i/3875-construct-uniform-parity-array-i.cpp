class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool isodd=false;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==1){
                isodd=true;
            }
        }
        if(isodd){
            return true;
        }
        return true;
    }
};