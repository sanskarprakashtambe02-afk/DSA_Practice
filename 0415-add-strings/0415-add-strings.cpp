class Solution {
public:
    string addStrings(string num1, string num2) {
        int a =num1.size()-1;
        int b=num2.size()-1;
        int carry =0;
        string ans="";
        while(a>=0&&b>=0){
            int number1=num1[a]-'0';
            int number2=num2[b]-'0';
            int sum=number1+number2+carry;
            int number=sum%10;
             carry=sum/10;
            string shabd=to_string(number);
            ans=shabd+ans;
            a--;b--;
        }
        while(a>=0){
            int number1=num1[a]-'0';
            int sum=number1+carry;
            int number=sum%10;
             carry=sum/10;
            string shabd=to_string(number);
            ans=shabd+ans;
            a--;
        }
        while(b>=0){
            int number2=num2[b]-'0';
            int sum=number2+carry;
            int number=sum%10;
             carry=sum/10;
            string shabd=to_string(number);
            ans=shabd+ans;
            b--;
        }
        if(carry==1){
            ans='1'+ans;
            carry=0;
        }
        return ans;
    }
};