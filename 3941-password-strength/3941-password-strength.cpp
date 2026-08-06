class Solution {
public:
    int passwordStrength(string password) {
        unordered_map<char,int>m;
        for(int i=0;i<password.size();i++){
            m[password[i]]++;
        }
        int ans=0;
        for(auto&[key,count]:m){
            int k=key;
            if(k>=48&&k<=57){
                ans=ans+3;
            }
            else if(k>=97&&k<=122){
                ans++;
            }
            else if(k>=65&&k<=90){
                ans+=2;
            }
            else{
                ans+=5;
            }
        }
        return ans;
    }
};