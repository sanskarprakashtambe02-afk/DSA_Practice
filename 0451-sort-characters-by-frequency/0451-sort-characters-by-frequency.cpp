class Solution {
public:
    string frequencySort(string s) {
        unordered_map<int,int>m;
        for(int i=0;i<s.size();i++){
            int val=s[i];
            m[val]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto&[key,count]:m){
            pq.push({count,key});
        }
        string ans="";
        while(!pq.empty()){
            for(int j=0;j<pq.top().first;j++){
                char letter=pq.top().second;
                ans+=letter;
            }
            pq.pop();
        }
        return ans;
    }
};