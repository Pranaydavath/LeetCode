class Solution {
public:
    bool checkSubarraySum(vector<int>& v, int k) {
        int n=v.size();
        unordered_map<int,int>mp;
        int s=0,f=0;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            int x=v[i];
            s+=x;
            int r=s%k;
            if(mp.find(r)!=mp.end()){
              if(i-mp[r]>=2)return true;
            }
            else mp[r]=i;
        
        }
       
        return false;
    }
};