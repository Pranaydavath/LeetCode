class Solution {
public:
    bool isV(char c) {
    string vow = "aeiou";
    for (char v : vow) {
        if (c == v) {
            return true;
        }
    }
    return false;
}
    
    vector<int> vowelStrings(vector<string>& st, vector<vector<int>>& q) {
        int n=st.size();
        vector<int>ans;
        string vow="aeiou";
        vector<int>pre(n,0);
       
        for(int i=0;i<n;i++){
            string s=st[i];
            int x=s.size();
            if(isV(s[0])&&isV(s[x-1])){
                if(i==0)pre[i]=1;
                else   pre[i]=pre[i-1]+1;
            }   
            else{
                if(i==0)pre[0]=0;
                else  pre[i]=pre[i-1];

            }
        }
        int q1=q.size();
        for(int i=0;i<q1;i++){
            int l=q[i][0],r=q[i][1];
            if(l==0)ans.push_back(pre[r]);
            else ans.push_back(pre[r]-pre[l-1]);
        }
        // for(int i=0;i<n;i++)cout<<pre[i]<<" ";
        return ans;
        
    }
};