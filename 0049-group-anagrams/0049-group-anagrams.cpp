class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& sts) {
        int n=sts.size();
        vector<vector<string>> ans;
        unordered_map<string,vector<int>>mp;
        vector<string> dup;
        for(int i=0;i<n;i++){
            string r=sts[i];
            sort(r.begin(),r.end());
            mp[r].push_back(i);
        }
        for(auto it:mp){
            vector<string> tp;
            vector<int> ind=it.second;
            for(int i:ind){
                tp.push_back(sts[i]);
            }
            ans.push_back(tp);
        }
        return ans;
        
    }
};