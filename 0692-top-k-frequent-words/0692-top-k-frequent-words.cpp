class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        for(int i=0;i<words.size();i++){
            m[words[i]]++;
        }
        priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>>pq;
        for(auto&[key,count]:m){
            pq.push({-count,key});
        }
        vector<string>ans;
        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};