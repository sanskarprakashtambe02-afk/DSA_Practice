class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;

        int j = 2;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        while (j < nums.size()) {
            if (arr1.back() > arr2.back()) {
                arr1.push_back(nums[j]);
            }
            else {
                arr2.push_back(nums[j]);
            }
            j++;
        }

        vector<int> ans;

        for (int i = 0; i < arr1.size(); i++) {
            ans.push_back(arr1[i]);
        }

        for (int i = 0; i < arr2.size(); i++) {
            ans.push_back(arr2[i]);
        }

        return ans;
    }
};