class Solution {
public:
    int firstCompleteIndex(vector<int>& v, vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        unordered_map<int,int>mp;
        for(int i=0;i<v.size();i++)mp[v[i]]=i;
        int ans=INT_MAX,c=0;
        for(int i=0;i<n;i++){
            c=0;
            for(int j=0;j<m;j++){
                c=max(c,mp[mat[i][j]]);
            }
            ans=min(ans,c);
        }
         for(int i=0;i<m;i++){
            c=0;
            for(int j=0;j<n;j++){
                c=max(c,mp[mat[j][i]]);
            }
            ans=min(ans,c);
        }
        return ans;
    }
};