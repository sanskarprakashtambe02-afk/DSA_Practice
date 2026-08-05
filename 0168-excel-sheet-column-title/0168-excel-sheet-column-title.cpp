class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while (columnNumber>0){
            char k;
            int alph=columnNumber%26;
            if(alph==0){
                alph=26;
                columnNumber -= 1;
            }
            k=alph-1+'A';
            ans+=k;
            columnNumber=columnNumber/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};