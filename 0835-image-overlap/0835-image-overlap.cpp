class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        vector<pair<int, int>> onesImg1;
        vector<pair<int, int>> onesImg2;
        
        // 1. Collect all coordinates of 1s in both images
        for (int r = 0; r < n; ++r) {
            for (int c = 0; c < n; ++c) {
                if (img1[r][c] == 1) onesImg1.push_back({r, c});
                if (img2[r][c] == 1) onesImg2.push_back({r, c});
            }
        }
        
        int maxOverlap = 0;
        
        // 2. 2D array to count the frequency of each translation vector.
        // The shifts range from -(n-1) to (n-1). 
        // We add 'n' to center the shifts at a positive index from 0 to 2n.
        vector<vector<int>> shiftCounts(2 * n, vector<int>(2 * n, 0));
        
        // 3. Compare every 1 in img1 to every 1 in img2
        for (auto& p1 : onesImg1) {
            for (auto& p2 : onesImg2) {
                int rowShift = p2.first - p1.first;
                int colShift = p2.second - p1.second;
                
                // Increment the count for this specific shift vector
                shiftCounts[rowShift + n][colShift + n]++;
                
                // Keep track of the maximum overlaps seen so far
                maxOverlap = max(maxOverlap, shiftCounts[rowShift + n][colShift + n]);
            }
        }
        
        return maxOverlap;
    }
};