typedef long long int ll;
class Solution {
public:
    long long maximumTripletValue(vector<int>& v) {
        ll ans=0;
       ll n=v.size();
    ll pre[n];
        for(int i=0;i<n;i++)pre[i]=0;
    pre[1]=v[0]-v[1];
    ll mx=max(v[0],v[1]);
    ll g=INT_MIN;
    for(ll i=2;i<n;i++){
       pre[i]=max(pre[i-1],mx-v[i]);
       ll vl=v[i]*pre[i-1];
       ans=max(ans,vl);
        mx=max(mx,ll(v[i]));
    }
    return ans;
    }
};