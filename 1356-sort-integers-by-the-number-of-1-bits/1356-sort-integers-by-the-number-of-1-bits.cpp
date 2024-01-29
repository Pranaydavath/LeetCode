class Solution {
public:
    vector<int> sortByBits(vector<int>& v) {
         vector<int>ans;
        int n=v.size();
        vector<pair<int,int>>p;
        
        for(auto it:v){
            pair<int,int>x=make_pair(__builtin_popcount(it),it);\
                p.push_back(x);
        }
        sort(p.begin(),p.end());
        for (auto it : p) {
        ans.push_back(it.second);
         }
        return ans;
    }
};