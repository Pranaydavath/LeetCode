class Solution {
public:
    int lengthOfLongestSubstring(string s) {
          int n=s.size();
    set<char>mp;
    int mx=0,p1=0,p2=0;
   while(p1<n&&p1<=p2&&p2<n){
       if(mp.find(s[p2])==mp.end()){
           mp.insert(s[p2]);
           if(p2-p1+1>mx)mx=p2-p1+1;
           p2++;           
       }
       else{
           mp.erase(s[p1]);
           p1++;
       }
   }  
    return mx;
    }
};