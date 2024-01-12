class Solution {
public:
    vector<int> singleNumber(vector<int>& v) {
        int n=v.size();
        vector<int>r;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)mp[v[i]]++;
        for(auto it:mp){
            if(it.second==1)r.push_back(it.first);
        }
        return r;
    }
};