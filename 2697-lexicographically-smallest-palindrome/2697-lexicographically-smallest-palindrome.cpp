class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int a=0;
        int b=s.size()-1;
        while(a<=b){
            if(s[a]!=s[b]){
                if(s[a]<s[b]){
                    s[b]=s[a];
                }
                else{
                    s[a]=s[b];
                }
            }
            a++;
            b--;
        }
        return s;
    }
};