class Solution {
public:
    int maxScore(vector<int>& v, int k) {
          int mx=0;
        int n=v.size();
      int suf[n+1];
      for(int i=0;i<=n;i++)suf[i]=0;
    suf[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--) suf[i]=suf[i+1]+v[i];
     mx=suf[n-k];
int pre=0;
   for(int i=0;i<k;i++){
     pre=pre+v[i];
    mx=max(mx,pre+suf[n-k+i+1]);
   }
   return mx;
    }
};