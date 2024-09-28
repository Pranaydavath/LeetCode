class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        unordered_map<char,int>mp;
        int mf=0;
        // for(int i=0;i<n;i++{
        //      mp[s[i]]++;
        // }
            int p1=0,ans=1;
         for(int p2=0;p2<n;p2++){
             mp[s[p2]]++;
             int x=mp[s[p2]];
             mf=max(mf,x);
             if(k<p2-p1+1-mf){
                 mp[s[p1]]--;
                 p1++;
             }
            ans=max(ans,p2-p1+1);
         }
        return ans;
              
        
    }
};