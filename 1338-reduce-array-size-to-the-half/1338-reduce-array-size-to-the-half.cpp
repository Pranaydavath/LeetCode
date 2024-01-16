class Solution {
public:
    int minSetSize(vector<int>& v) {
        int n=v.size();
        unordered_map<int,int>mp;
        for(auto it:v)mp[it]++;
        vector<int> a;
        int x=4;
        for(auto it:mp){
            a.push_back(it.second);
        }
        sort(a.begin(),a.end(),greater<int>());
        int ct=0,c=0;
        for(auto it:a){
            ct+=it;
            c++;
            if(ct>=n/2){
                break;
            }
        }
       return c;
    }
};