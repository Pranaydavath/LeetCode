class Solution {
public:
    int leastBricks(vector<vector<int>>& v) {
        int n=v.size();
        int ans=0;
        unordered_map<int,int>mp;
        int cd=0;
        for(int i=0;i<n;i++){
            cd=0;
            for(int j=0;j<v[i].size()-1;j++){
                cd+=v[i][j];
                mp[cd]++;
            }
        }
        for(auto it:mp){
            ans=max(ans,it.second);
        }
        return n-ans;
    }
};