class Solution {
public:
    vector<int> resultsArray(vector<int>& v, int k) {
        int n=v.size();
        int pre[n];
        fill(pre, pre + n, 0);
        for(int i=1;i<n;i++){
            if(v[i]-v[i-1]==1)pre[i]=pre[i-1]+1;
            else pre[i]=pre[i-1];
        }
        for(auto it:pre)cout<<it<<" ";
        vector<int>ans;
        for(int i=k-1;i<n;i++){
            if(pre[i]-pre[i-k+1]==k-1){
                ans.push_back(v[i]);
            }
            else ans.push_back(-1);
        }
        return ans;
    }
};