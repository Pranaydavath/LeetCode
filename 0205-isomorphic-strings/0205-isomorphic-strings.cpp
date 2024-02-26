class Solution {
public:
    bool isIsomorphic(string s1, string s2) {
          // Your code here
        unordered_map<int,int>mp,m;
        
        int n1=s1.size(),n2=s2.size(),f=0,g=0;
        if(n1!=n2)return 0;
        for(int i=0;i<n1;i++){
            if(mp.find(s1[i])==mp.end())mp[s1[i]]=s2[i];
            
            else if(mp[s1[i]]!=s2[i]){
                    f=1;
                    break;
                }
         }
          for(int i=0;i<n2;i++){
            if(m.find(s2[i])==m.end())m[s2[i]]=s1[i];
            
            else if(m[s2[i]]!=s1[i]){
                    g=1;
                    break;
                }
        }
        
        
        if(f==1||g==1)return 0;
     return 1;
     
    }
};