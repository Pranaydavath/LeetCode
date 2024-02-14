class Solution {
public:
    int longestPalindrome(vector<string>& w) {
        int n=w.size();
        int mx=0,f=0;
        unordered_map<string,int>mp;
        for(auto it:w)mp[it]++;
        for(int i=0;i<n;i++){
            string s=w[i];
            if(s[0]!=s[1]){
                string r="";
                r+=s[1];
                r+=s[0];
               if(mp.find(r)!=mp.end()){
                   mx+=min(mp[s],mp[r])*4;
                   mp.erase(s);
                   mp.erase(r);
               }
                
            }
            else if(s[0]==s[1]){
                
               int ct=mp[s];
                if(ct%2==0)mx+=ct*2;
                else{
                    if(f==0){
                        mx+=ct*2;
                        f=1;
                    }
                    else{
                        mx+=(ct-1)*2;
                    }
                }
                mp.erase(s);
                
                
            }
      
            
        }
              return mx;
    }
};