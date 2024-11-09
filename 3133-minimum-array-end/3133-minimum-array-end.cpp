class Solution {
public:
    long long minEnd(int n, int x) {
        long long int res=x;
        long long int ans=0,c=0,f=0;
        for(long int i=0;i<n-1;i++){
            res=(res+1);
            res|=x;
        }
        return res;
    }
};