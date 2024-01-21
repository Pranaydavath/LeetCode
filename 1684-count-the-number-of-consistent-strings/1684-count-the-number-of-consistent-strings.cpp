class Solution {
public:
    int countConsistentStrings(string s, vector<string>& w) {
        int n=w.size();
        // unordere_map<int,int>mp;
        int c=0;
        // for(int i=0;i<s.size();i++)mp[s[i]]++;
        for(int i=0;i<n;i++){
            string r=w[i];
            int f=0;
            for(char ch:r){
                if(s.find(ch)==string::npos){
                    f=1;
                    break;
                }
            }
            if(f==0)c++;
        }
        return c;
    }
};