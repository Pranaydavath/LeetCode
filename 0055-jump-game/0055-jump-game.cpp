class Solution {
public:
    bool canJump(vector<int>& v) {
        int n=v.size();
        int mx=n-1;
        int f=1;
        if(n==1)return true;
        for(int i=n-2;i>=0;i--){
            if(v[i]+i>=mx){
                mx=i;
                f=0;
            }
            else{
                f=1;
            }
        }
        if(f==1)return false;
        return true;
        
    }
};