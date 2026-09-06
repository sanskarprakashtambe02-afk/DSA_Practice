class Solution {
public:
    int numDistinct(string s, string t) {
        int n=s.length();
        int m=t.length();
        vector<vector<unsigned long long>>ans(n+1,vector<unsigned long long>(m+1,0));
        
        //when s is empty there are 0 ways to form t
        for(int j=0;j<=m;j++){
            ans[0][j]=0;
        }

        //if t is emplty only 1 way to form t is by deleting all the elements of s
        for(int i=0;i<=n;i++){
            ans[i][0]=1;
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]!=t[j-1]){
                    ans[i][j]=ans[i-1][j];
                }
                else{
                    ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
                }
            }
        }
        return ans[n][m];
    }
};