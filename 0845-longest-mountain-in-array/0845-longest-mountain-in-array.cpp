class Solution {
public:
    int longestMountain(vector<int>& v) {
          int mx=0;
        int n=v.size();
        if(n<3)return 0;
    int pre[n],suf[n];
    pre[0]=1,suf[n-1]=1;
    for(int i=1;i<n;i++){
        if(v[i]>v[i-1])pre[i]=pre[i-1]+1;
        else pre[i]=1;
    }
    for(int i=n-2;i>=0;i--){
        if(v[i]>v[i+1])suf[i]=suf[i+1]+1;
        else suf[i]=1;
    }
 
    for(int i=0;i<n;i++){
                if(pre[i]==1&&suf[i]==1)continue;
    if(pre[i]>=2&&suf[i]>=2)
       mx=max(mx,pre[i]+suf[i]-1);
    }
    return mx;
   
    }
};