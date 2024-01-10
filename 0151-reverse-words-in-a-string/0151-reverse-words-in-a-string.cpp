class Solution {
public:
    string reverseWords(string s) {
        string r=s;
        string res="";
        r+=" ";
        int n=r.size();
        vector<string> ans;
        for(int i=0;i<n;i++){
            res="";
            while(r[i]!=' '&&isalnum(r[i])){
                res+=r[i];
                i++;
            }
            if(res.size()>0)
            ans.push_back(res);
        }
        string c;
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size()-1;i++){
            cout<<ans[i]<<" ";
            c+=ans[i];
            c+=" ";
        }
        c+=ans[ans.size()-1];
        
    return c;
    }
};