class Solution {
public:
    int subarraySum(vector<int>& v, int k) {
         int n=v.size();
        int ans=0,sum=0;
        unordered_map<int,int>mp;
        mp[0]=1;//For empty subarray 
        for(int i=0;i<n;i++){
            sum+=v[i];
            int dif=sum-k;
            ans+=mp[dif];
            mp[sum]+=1;
        }
        return ans;
    }
};