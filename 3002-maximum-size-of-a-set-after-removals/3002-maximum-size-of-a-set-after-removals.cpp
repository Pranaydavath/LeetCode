class Solution {
public:
    int maximumSetSize(vector<int>& v1, vector<int>& v2) {
        int n=v1.size();
        set<int>s1,s2,c;
        for(int i=0;i<n;i++){
            s1.insert(v1[i]);
        }
      for(auto it:v2){
          s2.insert(it);
          if(s1.find(it)!=s1.end()){
              c.insert(it);
          }
      }
        int n1=s1.size(),n2=s2.size(),c1=c.size();
        return min(n,min(n1-c1,n/2)+min(n2-c1,n/2)+c1);
    }
};