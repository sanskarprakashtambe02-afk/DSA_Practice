class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        for(int i=0;i<strs.size();i++){
            string word=strs[i];
            sort(strs[i].begin(),strs[i].end());
            m[strs[i]].push_back(word);
        }
        vector<vector<string>>ans;
        for(auto&[key,count]:m){
            ans.push_back(count);
        }
        return ans;
    }
};