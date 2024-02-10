class Solution {
public:
    int countKDifference(vector<int>& v, int k) {
        unordered_map<int,int>mp;
        int n=v.size();
        int mx=0;
        for(int i=0;i<n;i++){
            int t=v[i]-k;
                mx+=mp[t];
            int y=v[i]+k;
            mx+=mp[y];
                mp[v[i]]++;
        
        }
        return mx;
    }
};