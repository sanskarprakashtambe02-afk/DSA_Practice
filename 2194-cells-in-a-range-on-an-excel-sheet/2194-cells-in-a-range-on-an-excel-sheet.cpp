class Solution {
public:
    vector<string> cellsInRange(string s) {
        int startnum=s[1];
        int endnum=s[4];
        int startalpha=s[0];
        int endalpha=s[3];
        vector<string>ans;
        for(int i=startalpha;i<=endalpha;i++){
            
            for(int j=startnum;j<=endnum;j++){
                string word="";
                char a=char(i);
                char b=char(j);
                word+=a;
                word+=b;
                ans.push_back(word);
            }
        }
        return ans;
    }
};