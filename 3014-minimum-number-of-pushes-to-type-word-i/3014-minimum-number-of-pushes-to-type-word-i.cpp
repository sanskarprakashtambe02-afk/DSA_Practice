class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        int n=word.size();
        if(n<9){
            return n;
        }
        else if(n<17){
            ans=8+(n-8)*2;
            return ans;
        }
        else if(n<25){
            ans=8+8*2+(n-16)*3;
            return ans;
        }
        ans=8+16+24+(n-24)*4;
        return ans;
    }
};