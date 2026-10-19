class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        priority_queue<int>pq;
        for(auto it : m){
            pq.push(it.second);
        }
        int ans=0;
        int count=0;
        while(!pq.empty()){
            count+=pq.top();
            pq.pop();
            ans++;
            if(count>=n/2){
                return ans;
            }
        }
        return ans;
    }
};