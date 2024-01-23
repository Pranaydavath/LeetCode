class Solution {
public:
    bool isAcronym(vector<string>& w, string s) {
        int n=w.size(),n1=s.size();
        if(n1!=n)return false;
        string r="";
        for(int i=0;i<n;i++){
            r+=w[i][0];
        }
        cout<<r;
        return r==s;
    }
};