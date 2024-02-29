class Solution {
public:
    string customSortString(string o, string s) {
        int n=o.size(),n1=s.size();
        unordered_map<char,int>mp,m;
        for(int i=0;i<n1;i++){
            m[s[i]]++;
        }
        string r="";
        for(int i=0;i<n;i++){
            if(m.find(o[i])!=m.end()){
                while(m[o[i]]){
                    r+=o[i];
                    m[o[i]]--;
                }
            }
            
        }
        for(int i=0;i<n1;i++){
            if(m[s[i]]){
                r+=s[i];
            }
             
        }
        return r;
    }
};