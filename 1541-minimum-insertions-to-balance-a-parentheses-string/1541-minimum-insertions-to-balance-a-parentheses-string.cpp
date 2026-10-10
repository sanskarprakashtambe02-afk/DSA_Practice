class Solution {
public:
    int minInsertions(string s) {
        vector<int> k;
        int count = 0;
        
        // FIX 1: Loop all the way to the end of the string
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                count += 2;
            } else {
                count--; 
            }
            
            // FIX 2: Push if it's the last character, OR if the character changes
            if(i == s.size() - 1 || s[i] != s[i+1]){
                k.push_back(count);
                count = 0;
            }
        }
        
        int carry = 0;
        int insertion = 0;
        
        // FIX 3: Process the chunks one by one
        for(int i = 0; i < k.size(); i++){
            if (k[i] > 0) {
                // This is a chunk of '('.
                // If we have an odd carry, we MUST insert a ')' right now
                if (carry % 2 != 0) {
                    insertion++;
                    carry--;
                }
                carry += k[i]; 
            } else {
                // This is a chunk of ')'. 
                // k[i] is already negative, so adding it subtracts from carry
                carry += k[i];
                
                // If carry drops below 0, we have too many ')' and need to insert '('
                if (carry < 0) {
                    int extra_right = abs(carry);
                    int needed_left = (extra_right + 1) / 2; // Every '(' covers 2 ')'
                    
                    insertion += needed_left;
                    
                    // Calculate how many ')' are left over after our insertion
                    carry = (needed_left * 2) - extra_right;
                }
            }
        }
        
        return insertion + carry;
    }
};