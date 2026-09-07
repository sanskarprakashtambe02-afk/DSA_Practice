class Solution {
public:
    int distinctSubseqII(string s) {
        unsigned long long total=0;
        long long MOD = 1e9 + 7;
        unordered_map<char,long long>m;
        for(int i=0;i<s.size();i++){
            unsigned long long newlyadded=(total+1)%MOD;
            if(m.count(s[i])==1){
                total=(total+newlyadded-m[s[i]]+MOD)%MOD;
                m[s[i]]=newlyadded;
            }
            else{
                total=(total+newlyadded)%MOD;
                m[s[i]]=newlyadded;
            }
        }
        return total;
    }
};