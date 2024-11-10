class Solution {
public:
    void addc(vector<int>&bit,int n,int sign){
        int i=0;
        while(n>0){
            bit[i]=bit[i]+(sign)*(n%2);
            n/=2;
            i++;
        }
    }
    bool isk(vector<int>&bit,int k){
        int xr=0;
        for(int i=0;i<32;i++){
            xr+=(bit[i]?1:0)*(1<<i);
        }
        return xr>=k;
    }
    int minimumSubarrayLength(vector<int>& v, int k) {
        int n=v.size();
        vector<int> bit(32,0);
        int s=0,mn=INT_MAX;
        int i=0,j=0;
        while(j<n){
            addc(bit,v[j],1);
            while(isk(bit,k)&&i<=j){
                mn=min(mn,j-i+1);
                addc(bit,v[i],-1);
                i++;
            }
            j++;
        }
        if(mn==INT_MAX)return -1;
        return mn;
    }
};