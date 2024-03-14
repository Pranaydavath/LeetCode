class Solution {
public:
    int numSubarraysWithSum(vector<int>& v, int k) {
        int n=v.size();
        unordered_map<int,int>mp;
        int ans=0,s=0;;
        for(int i=0;i<n;i++){
            s+=v[i];
            if(s==k)ans++;
            ans+=mp[s-k];
            mp[s]++;
        }
        return ans;
    }
};