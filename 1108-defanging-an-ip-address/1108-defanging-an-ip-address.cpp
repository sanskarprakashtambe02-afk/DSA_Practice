class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        int a=0;
        while(a<address.size()){
            if(address[a]!='.'){
                ans=ans+address[a];
                a++;
            }
            else{
                ans=ans+'['+'.'+']';
                a++;
            }

        }
        return ans;
    }
};