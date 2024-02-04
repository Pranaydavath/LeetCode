class Solution {
public:
    int longestSubarray(vector<int>& v) {
    int n=v.size();
        int zc=0,mx=-1;
        int i=0,j=0;
        while(i<n&&j<n){
            if(v[j]==0){
                zc++;
            }
                while(zc>1){
                    if(v[i]==0)zc--;
                    i++;
                }
            mx=max(mx,j-i);
            j++;
            
        }
        return mx;
    }
    
};