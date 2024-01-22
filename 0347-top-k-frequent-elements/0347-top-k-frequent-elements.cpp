class Solution {
public:
    vector<int> topKFrequent(vector<int>& v, int k) {
        int n=v.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)mp[v[i]]++;
        vector<pair<int,int>>p;
      for(auto it : mp){
    pair<int, int> x = make_pair(it.second, it.first);
    p.push_back(x);
}

sort(p.begin(), p.end(), greater<pair<int, int>>());

vector<int> ans;
for(int i = 0; i < k; i++){
    ans.push_back(p[i].second);
}

return ans;

    }
};