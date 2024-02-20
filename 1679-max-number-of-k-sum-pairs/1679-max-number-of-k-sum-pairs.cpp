class Solution {
public:
    int maxOperations(vector<int>& v, int k) {
        int n=v.size();
        unordered_map<int,int>mp,m;
        set<int>s;
        int c=0;
        for(auto it:v)mp[it]++;
        for(auto it:mp){
            int x=it.first;
            if(s.find(x)==s.end()){
                s.insert(x);
                s.insert(k-x);
                
                if(mp.find(k-x)!=mp.end()){
                    if(k-x==x)c+=(mp[x]/2);
                   else c+=min(mp[k-x],mp[x]);    
                }
            }
        }
        return c;
    }
};