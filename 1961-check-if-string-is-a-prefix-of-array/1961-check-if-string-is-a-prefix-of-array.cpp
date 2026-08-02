class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int a=0;
        int b=0;
        while(a<s.size()&&b<words.size()){
            for(int i=0;i<words[b].size();i++){
                if(s[a]!=words[b][i]){
                    return false;
                }
                a++;
                
            }
            b++;
        }
        if(a<s.size()){
            return false;
        }
        return true;
    }
};