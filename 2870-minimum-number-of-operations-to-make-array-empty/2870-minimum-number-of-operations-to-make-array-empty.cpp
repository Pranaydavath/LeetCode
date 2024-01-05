class Solution {
public:
    int minOperations(vector<int>& v) {
         int n=v.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)mp[v[i]]++;
        for(auto it:mp){
            if(it.second==1)return -1;
        }
        int ans=0,f=0;
        for(int i=0;i<n;i++){
            int x=mp[v[i]];
            if(x%3==0){
                if(mp[v[i]]>0)
                ans+=1;
                mp[v[i]]-=3;
                f=1;
             
            }
            else if(x%2==0){
                if(mp[v[i]]>0)
                ans+=1;
                mp[v[i]]-=2;
                f=1;
            }
            else if(x>4){
                ans+=1;
                mp[v[i]]=mp[v[i]]-3;
            }
            else if(x==1){
                f=0;
                break;
            }
            cout<<mp[v[i]]<<" ";

        }
        if(f==0)return -1;
        return ans;
    }
};