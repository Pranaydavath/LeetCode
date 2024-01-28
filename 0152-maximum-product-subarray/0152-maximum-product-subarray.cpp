class Solution {
public:
    int maxProduct(vector<int>& v) {
        int n=v.size();
        if(n==1)return v[0];
        int p=1;
        int pre=1,suf=1,mx1=0,mx2=0,ans;
        for(int i=0;i<n;i++){
            pre*=v[i];
            mx1=max(mx1,pre);
            if(v[i]==0){
                pre=1;
            }
            
        }
         for(int i=n-1;i>=0;i--){
            suf*=v[i];
            mx2=max(mx2,suf);
            if(v[i]==0){
                suf=1;
            }
        }
        ans=max(mx1,mx2);
        
        return ans;
    }
};