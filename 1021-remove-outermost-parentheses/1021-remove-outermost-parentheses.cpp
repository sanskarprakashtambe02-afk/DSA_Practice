class Solution { // FIXED: changed 'Class' to 'class'
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string ans = "";
        string part = "";
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                count++; 
            }
            else { 
                count--; 
            }
            
            part.push_back(s[i]);
            
            if (count == 0) {
                // Your logic to strip the outer layer is perfect
                part = part.substr(1, part.size() - 2);
                ans += part;
                part = "";
            }
        }
        return ans;
    }
};
