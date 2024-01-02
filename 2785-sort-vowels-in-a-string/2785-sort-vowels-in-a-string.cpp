class Solution {
public:
    string sortVowels(string s) {
        int n=s.size();
        vector<char> r;
        string t="aeiouAEIOU";
        for(int i=0;i<n;i++){
            if(t.find(s[i])!=-1)r.push_back(s[i]);
        }
        sort(r.begin(),r.end());
        vector<pair<char,int>>pr;
        // for(auto it:r){
        //     pair<char,int> c=make_pair(it,int(it));
        //     pr.push_back(c);
        // }
        // sort(pr.begin(),pr.end());
        // for(auto i:r)cout<<i<<" ";
        // cout<<endl;
        // for(auto it:pr){
        //     cout<<it.first<<" "<<it.second<<" ";
        // }
        int j=0;
        for(int i=0;i<n;i++){
            if(t.find(s[i])!=-1){
                s[i]=r[j++];
            }
        }
        return s;
    }
};