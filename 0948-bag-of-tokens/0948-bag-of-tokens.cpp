class Solution {
public:
    int bagOfTokensScore(vector<int>& v, int p) {
        int n=v.size();
        if(n==0)return 0;
        int ans=0,cur,tp;
        sort(v.begin(),v.end());
        int i=0,j=n-1;
        cur=p;
        int c=0;
        
        if(cur<v[0])return 0;
        while(i<=j){
              if(cur>=v[i]){
                  cur=cur-v[i++];
               c++;
               ans=max(ans,c);  
              }
            else if(cur<v[i]){
               cur=cur+v[j--];
                c--; 
            }            
        }
        return ans;
    }
};