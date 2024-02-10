class Solution {
public:
    vector<string> commonChars(vector<string>& w) {
        int n=w.size();
        unordered_map<char,int>mp,mf;
        vector<string>ans;
        for(int i=0;i<26;i++)mf['a'+i]=1000;
        for(int i=0;i<n;i++){
            string s=w[i];
           for(char ch:s)mp[ch]++;
          for(char ch='a';ch<='z';ch++){
                  mf[ch]=min(mp[ch],mf[ch]);
            }
            mp.clear();
      
        }
       for(auto it:w[0]) {
        while(mf[it]>0 ) {
            ans.push_back(string(1,it));
           mf[it]--;
        }
      }
        return ans;
    }
};