class Solution {
public:
    bool rotateString(string s, string tar) {
        int n=s.size();
       for(int i=0;i<n;i++){
           char lc=s.back();
           s.pop_back();
           s.insert(s.begin(),lc);
           cout<<s<<endl;
           if(s==tar)return true;
       }
    return false;
    }
};