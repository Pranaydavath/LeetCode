class Solution {
public:
    int rob(vector<int>& v) {
        int n=v.size();
        vector<int>dp(n,0);
        if(n==1)return v[0];
        dp[0]=v[0];
        dp[1]=max(v[1],dp[0]);
        int i=2;
        while(i<n){
            dp[i]=max(dp[i-2]+v[i],dp[i-1]);
            i++;
        }
        return dp[n-1];
        
        
    }
};