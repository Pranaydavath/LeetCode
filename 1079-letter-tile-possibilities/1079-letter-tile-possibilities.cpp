class Solution {
public:
     set<string>st;
    void recur(string r,string s,int n,int f[]){
      for(int i=0;i<n;i++){
          if(f[i]!=1){
               r.push_back(s[i]);
               f[i]=1;
              st.insert(r);
               recur(r,s,n,f);
              f[i]=0;
              r.pop_back();
          }
      }
    }
    
    int numTilePossibilities(string s) {
         int n=s.size();
        int f[n];
        for(int i=0;i<n;i++)f[i]=0;
        int c=0;
        string r="";
        recur(r,s,n,f);
        return st.size();       
    }
};