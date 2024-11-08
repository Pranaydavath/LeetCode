class Solution {
public:
    vector<int> getMaximumXor(vector<int>& v, int k) {
        int n=v.size();
         vector<int>ans(n);
    int mxxor=(1<<k)-1;
    // cout<<mxxor<<endl;
    int xr=0;
    for(int i=0;i<n;i++){
      xr^=v[i];
      ans[i]=xr^mxxor;
      // cout<<ans[i]<<" ";
    }
    reverse(ans.begin(),ans.end());
    for(auto it:ans)cout<<it<<" ";
        return ans;
    }
};