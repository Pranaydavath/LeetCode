class Solution {
public:
    string truncateSentence(string s, int k) {
        int n=s.size();
        vector<string>res;
        string r="";
        for(int i=0;i<n;i++){
            string p="";
            while(i<n&&s[i]!=' '){
                p+=s[i];
                i++;
            }
            res.push_back(p);
        }
        for(int i=0;i<k-1;i++){
            r+=res[i];
            r+=" ";
        }
        r+=res[k-1];
        return r;
    }
};