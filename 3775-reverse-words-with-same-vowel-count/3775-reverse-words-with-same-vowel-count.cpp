class Solution {
public:
    string reverseWords(string s) {
        int a=0;
        int b=0;
        string ans="";
        int vowels=0;
        string word="";
        while(b<s.size()&&s[b]!=' '){
            if(s[b]=='a'||s[b]=='e'||s[b]=='i'||s[b]=='o'||s[b]=='u'){
                vowels++;
            }
            word+=s[b];
            b++;
        }
        ans+=word;
        while(b<s.size()){
            if (s[b] == ' ') {
                b++;
                continue; 
            }
            int count =0;
            word="";
            while(b<s.size()&&s[b]!=' '){
                if(s[b]=='a'||s[b]=='e'||s[b]=='i'||s[b]=='o'||s[b]=='u'){
                    count++;
                }
                word+=s[b];
                b++;
            }
            if(count ==vowels){
                reverse(word.begin(),word.end());
            }
            ans+=' '+word;
        }
        return ans;
    }
};