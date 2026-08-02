class Solution {
public:
    int captureForts(vector<int>& forts) {
        int a = 0;
        int ans = 0;
        int n = forts.size();
        
        while (a < n - 1) {
            int captured = 0;
            
            if (forts[a] == 1 && forts[a+1] == 0) {
                int temp = a + 1; 
                while (temp < n && forts[temp] == 0) {
                    captured++;
                    temp++;
                }
                if (temp < n && forts[temp] == -1) {
                    ans = max(ans, captured);
                }
                a = temp; 
            }
            else if (forts[a] == -1 && forts[a+1] == 0) { 
                int temp = a + 1;
                while (temp < n && forts[temp] == 0) {
                    captured++;
                    temp++;
                }
                if (temp < n && forts[temp] == 1) {
                    ans = max(ans, captured);
                }
                a = temp; 
            }
            else {
                a++;
            }
        }
        
        return ans;
    }
};