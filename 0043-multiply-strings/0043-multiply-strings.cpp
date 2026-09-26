class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        vector<int>ans(num1.size()+num2.size(),0);
        for(int i = num1.size() - 1; i >= 0; i--){
            int number1=num1[i]-'0';
            for(int j = num2.size() - 1; j >= 0; j--){
                int number2=num2[j]-'0';
                int prod=number1*number2+ans[i+j+1];
                ans[i+j+1]=prod%10;
                ans[i + j] += prod / 10;

            }
        }
        string uttar = "";
        bool leadingZero = true;
        
        for(int i = 0; i < ans.size(); i++) {
            if (ans[i] != 0) leadingZero = false;
            
            if (!leadingZero) {
                uttar += to_string(ans[i]);
            }
        }
        return uttar;
    }
};