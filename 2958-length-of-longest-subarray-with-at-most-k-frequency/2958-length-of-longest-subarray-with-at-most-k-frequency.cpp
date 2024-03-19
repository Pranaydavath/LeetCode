
typedef long long int ; 
class Solution {
public:
    int maxSubarrayLength(vector<int>& v, int k) {
        int ans=0,c=0,mx=0;
        int n=v.size();
        int i=0,j=0,f=1;
       map<int,int>mp;

        while(i<=j&&i<n&&j<n){
                
                if(f==1){//count only if j is new 
                    mp[v[j]]++;
                    
                }
                 c=mp[v[j]];
                // cout<<i<<" "<<j<<" "<<c<<endl;
                if(c<=k){
                    mx=max(mx,j-i+1);
                    j++;
                    f=1;

                }
                else{
                    f=0;  //set falg to zero for not counting dupliacte entries in map
                     mp[v[i]]--;
                    i++;
                    mp[v[j]]--;
                    j--;
                   // cout<<i<<" "<<j<<" "<<c<<endl;
                    if(i>j){
                        j=i;
                         mp[v[j]]++;
                    }
                }
            
        }
       return mx;
      

    }
};