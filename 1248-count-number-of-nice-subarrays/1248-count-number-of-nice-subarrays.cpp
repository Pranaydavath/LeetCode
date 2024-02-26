class Solution {
public:
    int numberOfSubarrays(vector<int>&v, int k) {
        int n=v.size();
        unordered_map<int,int>mp;
        int oc=0,cur=0,ans=0;
        for(int i=0;i<n;i++){
          
          if(v[i]%2==1)oc++;
              if(oc==k)ans++;
            if(mp.find(oc)==mp.end())mp[oc]=1;
            else if(mp.find(oc)!=mp.end())mp[oc]++;
            ans+=mp[oc-k];
        }
        return ans;
    }
};