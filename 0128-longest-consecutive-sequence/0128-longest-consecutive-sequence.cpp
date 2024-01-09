class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        int ls=INT_MIN,ct=1,mx=1;
        int n=v.size();
        if(n==0)return 0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i]-1==ls){
                ct++;
                ls=v[i];
            }
            else if(ls!=v[i]){
                ct=1;
                ls=v[i];
            }
            mx=max(mx,ct);
        }
        return mx;
    }
};