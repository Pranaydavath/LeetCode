class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& v) {
        int n=v.size();
        vector<vector<int>>ans(1);
        int ins=0,ch=0;
        for(int i=0;i<n;i++){
            ins=0;
            for(int j=0;j<ans.size();j++){
                ch=0;
                for(int k=0;k<ans[j].size();k++){
                    if(v[i]==ans[j][k]){
                        ch=1;
                        break;
                    }
                }
                if(ch==0){
                    ans[j].push_back(v[i]);
                    ins=1;
                    break;
                }                
                
            }
            if(ins==0){
                ans.push_back({v[i]});
            }
        }
        return ans;
    }
};