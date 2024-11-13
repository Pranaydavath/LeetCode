class Solution {
public:
    long long int pairs(int k,vector<int>&v){
      
        sort(v.begin(),v.end());
        long long int s=0,n=v.size();
          long long int i=0,j=n-1,ans=0;
        while(i<j){
            if(v[j]+v[i]<=k){
              ans+=(j-i);
                i++;
            }
            else j--;
        }
        return ans;
    }
    long long countFairPairs(vector<int>& v, int l, int r) {
     long long int n=v.size(),ans=0;
        ans=pairs(r,v)-pairs(l-1,v);
        return ans;
    }
};