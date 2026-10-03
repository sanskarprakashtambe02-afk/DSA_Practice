class Solution {
public:
    int longestValidParentheses(string s) {
        int ans1=0;
        int dummy1=0;
        int curr1=0;
        int excep1=0;
        for(int i=0;i<s.size();i++){
            dummy1++;
            if(s[i]=='('){
                curr1++;
            }else{
                curr1--;
            }
            if(curr1==0){
                excep1=dummy1;
            }

            if(curr1<0){
                ans1=max(ans1,dummy1-1);
                dummy1=0;
                curr1=0;
            }
        }
        ans1=max(ans1,excep1);

        int ans2=0;
        int dummy2=0;
        int curr2=0;
        int excep2=0;
        for(int i=s.size()-1;i>=0;i--){
            dummy2++;
            if(s[i]==')'){
                curr2++;
            }else{
                curr2--;
            }
            if(curr2==0){
                excep2=dummy2;
            }

            if(curr2<0){
                ans2=max(ans2,dummy2-1);
                dummy2=0;
                curr2=0;
            }
        }
        ans2=max(ans2,excep2);
        ans1=max(ans1,ans2);
        return ans1;
    }
};