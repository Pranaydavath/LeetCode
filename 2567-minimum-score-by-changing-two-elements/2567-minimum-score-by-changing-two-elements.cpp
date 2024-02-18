class Solution {
public:
    int minimizeSum(vector<int>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        int ans=min(min((v[n-1]-v[2]),v[n-3]-v[0]),v[n-2]-v[1]);
        return ans;
    }
};