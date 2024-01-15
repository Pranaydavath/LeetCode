class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& v) {
        int n=v.size();
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(v[i][0]);
             s.insert(v[i][1]);
            
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[v[i][1]]++;
            
        }
        vector<int>x(s.begin(),s.end()),st1,st2;
         for(auto i:mp){
            if(i.second==1)st2.push_back(i.first);
        }
        int f=0;
        for(auto it:s){
            if(mp.find(it) != mp.end())continue;
            else st1.push_back(it);
        }
        sort(st1.begin(),st1.end());
        sort(st2.begin(),st2.end());
        return {st1,st2};
    }
};