class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>ans;
        int a =num.size()-1;
        int carry =0;
        while(a>=0&&k>0){
            int number1=num[a];
            int number2=k%10;
            k=k/10;
            int sum=number1+number2+carry;
            int number=sum%10;
            carry=sum/10;
            ans.push_back(number);
            a--;
        }
        while(a>=0){
            int number1=num[a];
            int sum=number1+carry;
            int number=sum%10;
            carry=sum/10;
            ans.push_back(number);
            a--;
        }
        while(k>0){
            int number2=k%10;
            k=k/10;
            int sum=number2+carry;
            int number=sum%10;
            carry=sum/10;
            ans.push_back(number);
        }
        if(carry>0){
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};