class Solution {
public:
    int rearrangeCharacters(string s, string t) {
         unordered_map<char,int>mp1,mp2;
  int ans=INT_MAX;
  int n1=s.size(),n2=t.size();
  for(auto it:s)mp1[it]++;
  for(auto it:t)mp2[it]++;
if(n1<n2)return 0;
  for(auto it:mp2){
  	char ch=it.first;
 if(mp1[ch]>0&&mp2[ch]>0)
  	ans=min(mp1[ch]/mp2[ch],ans);
 else return 0;
  }

   return ans;
    }
};