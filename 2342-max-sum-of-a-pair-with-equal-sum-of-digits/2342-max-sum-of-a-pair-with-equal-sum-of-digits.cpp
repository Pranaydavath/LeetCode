class Solution {
public:
    int dig(int n){
    int sum=0;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
    int maximumSum(vector<int>& a) {
        int n=a.size();
        int ans=-1,sum=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        if(mp.find(dig(a[i]))!=mp.end()){
                int tp=mp[dig(a[i])];
                ans=max(ans,a[i]+tp);
                mp[dig(a[i])]=max(mp[dig(a[i])],a[i]);

        }
        else{
            mp[dig(a[i])]=a[i];
        }
    }
    return ans;
}
};