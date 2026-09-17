#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int minSumOfLengths(std::vector<int>& arr, int target) {
        int n = arr.size();
        // dp[i] stores the minimum length of a valid sub-array ending at or before index i
        std::vector<int> dp(n, INT_MAX); 
        
        int left = 0;
        int current_sum = 0;
        int best_single_len = INT_MAX;
        int min_total_len = INT_MAX;
        
        for (int right = 0; right < n; ++right) {
            current_sum += arr[right];
            
            // Shrink window if the sum exceeds the target
            while (current_sum > target && left <= right) {
                current_sum -= arr[left];
                left++;
            }
            
            // If a valid sub-array is found
            if (current_sum == target) {
                int current_len = right - left + 1;
                
                // Check if a valid, completely separate sub-array exists before 'left'
                if (left > 0 && dp[left - 1] != INT_MAX) {
                    min_total_len = std::min(min_total_len, current_len + dp[left - 1]);
                }
                
                // Update the shortest single sub-array found so far
                best_single_len = std::min(best_single_len, current_len);
            }
            
            // Record the best length up to this index for future windows to use
            dp[right] = best_single_len;
        }
        
        return min_total_len == INT_MAX ? -1 : min_total_len;
    }
};