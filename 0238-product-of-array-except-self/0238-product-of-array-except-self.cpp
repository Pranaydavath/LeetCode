class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n=v.size();
        vector<int> ans(n);
      ans[0]=v[0];
        for(int i=1;i<n;i++)
        {
         ans[i]=v[i]*ans[i-1];
        }
       int pro=1;
        for(int i=n-1;i>0;i--){
            ans[i]=ans[i-1]*pro;
            pro*=v[i];
        }
 ans[0]=pro;
        return ans;
    }
};