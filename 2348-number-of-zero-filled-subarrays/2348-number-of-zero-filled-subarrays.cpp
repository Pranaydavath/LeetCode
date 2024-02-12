
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& v) {
      long long   int n=v.size();
     long long  int ct=0,mx=0,ans=-1;
        for(long long int i=0;i<n;i++){
            if(v[i]==0){
                ans=i;
                break;
            }
        }
        if(ans==-1)return 0;
        for(long long int i=ans;i<n;i++){
            while(i<n&&v[i]==0){
                ct++;
                i++;
            }
            mx+=(ct)*(ct+1)/2;
            ct=0;
            
        }
        return mx;
    }
};