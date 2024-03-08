class Solution {
public:
    int maxFrequencyElements(vector<int>& v) {
        int n=v.size();
        unordered_map<int,int>mp;
        for(auto it:v)mp[it]++;
        int mx=0;
        for(auto it:mp){
            if(mx<it.second){
                mx=it.second;
            }
        }
        int c=0;
        for(auto it:v){
            if(mp[it]==mx)c++;
        }
        return c;
    }
};