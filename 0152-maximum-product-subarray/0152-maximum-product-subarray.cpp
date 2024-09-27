class Solution {
public:
    int maxProduct(vector<int>& v) {
        int n=v.size();
        if(n==1)return v[0];
        int mx=0,pro=1;
    for(int i=0;i<n;i++){
        pro=1;
        // mx=max(mx,pro);
        for(int j=i;j<n;j++){
            pro*=v[j];
            // if(pro<=0)pro=0;
            mx=max(mx,pro);
        }
    }
      return mx;
    }
    
};