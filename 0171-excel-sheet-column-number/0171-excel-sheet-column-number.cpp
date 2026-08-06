class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=columnTitle[0]-'A'+1;
        for(int i=0;i<columnTitle.size()-1;i++){
            int a=columnTitle[i+1]-'A'+1;
            ans=ans*26;
            ans=ans+a;
            
        }
        return ans;
    }
};