class Solution {
public:
    vector<bool> camelMatch(vector<string>& q, string pat) {
        int n=q.size();
        vector<bool>ans;
        int i=0,j=0;
        for(auto it:q){
             i=0,j=0;
            string s=it;
              int f=0;
            while(i<s.size()&&j<pat.size()){
              
                if(s[i]==pat[j]){
                    i++;
                    j++;
                    continue;
                }
                else if(s[i]!=pat[j]&&s[i]>='A'&&s[i]<='Z'){
                    f=1;
                    ans.push_back(false);
                    break;
                    
                }
                else if(s[i]!=pat[j]){
                    i++;
                }
            }
            if(i==s.size()&&j<pat.size()){
                f=1;
                    ans.push_back(false);
                continue;
            }
            while(i<s.size()){
                if(s[i]>='A'&&s[i]<='Z'&&f==0){
                 f=1;
                    ans.push_back(false);
                    break;
                }
                else i++;
            }
            if(f==0)ans.push_back(true);
            
        }
        return ans;
    }
};