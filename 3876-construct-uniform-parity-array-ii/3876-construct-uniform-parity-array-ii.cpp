class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool isodd;
        sort(nums1.begin(),nums1.end());
        if(nums1[0]%2==0){
            isodd=false;
        }
        else{
            isodd=true;
        }
        if(!isodd){
            for(int i=0;i<nums1.size();i++){
                if(nums1[i]%2==1){
                    return false;
                }
            }
        }
        return true;
    }
};