class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        // Map the coordinates for readability: [left, bottom, right, top]
        
        // 1. Is rec1 completely to the left of rec2?
        bool left = rec1[2] <= rec2[0];
        
        // 2. Is rec1 completely to the right of rec2?
        bool right = rec1[0] >= rec2[2];
        
        // 3. Is rec1 completely above rec2?
        bool top = rec1[1] >= rec2[3];
        
        // 4. Is rec1 completely below rec2?
        bool bottom = rec1[3] <= rec2[1];
        
        // If ANY of these non-overlap conditions are true, they don't overlap.
        // We want to return true if they DO overlap, so we return the opposite (!).
        return !(left || right || top || bottom);
    }
};