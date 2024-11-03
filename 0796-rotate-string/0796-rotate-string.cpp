class Solution {
public:
    bool rotateString(string s, string tar) {
        int x=s.size();
        s+=s;
        int n=s.size();
        for(int i=0;i<n-x;i++){
            if(s.substr(i,x)==tar)return true;
        }
        return false;
    }
};