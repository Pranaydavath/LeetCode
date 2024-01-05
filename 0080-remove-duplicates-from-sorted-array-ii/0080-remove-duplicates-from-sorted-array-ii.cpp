class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int n=v.size();
        int ct=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)mp[v[i]]++;
        for(int i=0;i<n;i++){
            if(mp[v[i]]<=2){
                v[ct++]=v[i];
               
                mp[v[i]]-=1;
            }
            else{
                mp[v[i]]-=1;
            }
        }
        return ct;
    }
};