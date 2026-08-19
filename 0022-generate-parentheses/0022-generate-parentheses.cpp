class Solution {
public:
    
    void back_track(vector<string>& result, string current_string, int open_count, int close_count, int n) {
        if(current_string.length() == 2 * n) {
            result.push_back(current_string);
            return;
        }
        if(open_count < n) {
            back_track(result, current_string + "(", open_count + 1, close_count, n);
        }
        if(close_count < open_count) {
            back_track(result, current_string + ")", open_count, close_count + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        back_track(result, "", 0, 0, n);
        return result;
    }
};