class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> v;
       int ct=0;
        for(int i=1;i<=n;i++){
            if(n%i==0) {
                ct++;
                v.push_back(i);
            }
            if(k==ct)return v[k-1];
        }
        return -1;
    }
};