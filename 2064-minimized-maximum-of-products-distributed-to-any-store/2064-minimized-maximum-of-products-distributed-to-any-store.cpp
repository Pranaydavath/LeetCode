class Solution {
public:
    bool ispos(int mid,vector<int>&quants,int n){
        long int nos=0;
        for(int i=0;i<quants.size();i++){
            nos+=ceil((double)quants[i]/mid);
        }
        return nos<=n;
    }
    int minimizedMaximum(int n, vector<int>& quants) {
        int mx=0,l=1,m=quants.size();
        for(int x:quants){
            mx=max(x,mx);
        }
        int ans=INT_MAX,r=mx;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(ispos(mid,quants,n)){
                r=mid-1;
                ans=min(mid,ans);
            }
            else l=mid+1;
        }
        
        return ans;
    }
};