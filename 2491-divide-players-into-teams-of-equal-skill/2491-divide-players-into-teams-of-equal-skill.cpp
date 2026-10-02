class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int st=0;
        int end=skill.size()-1;
        int sum=skill[st]+skill[end];
        long long prod=0;
        while(st<end){
            int curr=skill[st]+skill[end];
            if(curr!=sum){
                return -1;
            }else{
                prod+=(long long)skill[st]*skill[end];
                st++;
                end--;
            }
        }
        return prod;
    }
};