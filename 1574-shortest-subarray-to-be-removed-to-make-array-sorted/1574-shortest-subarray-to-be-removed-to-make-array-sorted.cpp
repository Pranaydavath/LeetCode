class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& v) {
        int n=v.size();
        int l=0,r=n-1,ans=0;
        while(l+1<n&&v[l+1]>=v[l])l++;
        while(r-1>=0&&v[r-1]<=v[r])r--;
        // cout<<l<<" "<<r;
        if(l>=r)return 0;
        int p=0,q=r;
        ans=r;
        while(p<=l){
            while(q<n&&v[q]<v[p])q++;
            ans=min(ans,q-p-1);
            p++;
        }
        cout<<p<<" "<<q;
        return ans;
    }
};