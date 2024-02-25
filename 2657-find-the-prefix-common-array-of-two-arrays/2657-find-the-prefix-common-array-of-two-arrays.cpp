class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int ct=0;
        vector<int>ans(n,0);
        unordered_map<int,int>mp;
        mp[a[0]]++;
        mp[b[0]]++;
        if(a[0]==b[0]){
            ans[0]=1;
            ct++;
        }
        for(int i=1;i<n;i++){
            if(a[i]==b[i])ct++;
            if(mp.find(a[i])!=mp.end())ct++;
            if(mp.find(b[i])!=mp.end())ct++;
            mp[a[i]]++;
            mp[b[i]]++;
            ans[i]=ct;
        }
        return ans;
    }
};