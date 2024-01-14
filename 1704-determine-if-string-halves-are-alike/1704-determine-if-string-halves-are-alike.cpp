class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        for (char &c : s) {
        c = tolower(c);
    }
        string s1=s.substr(0,n/2),s2=s.substr(n/2,n/2);
        int c1=0,c2=0;
        string vow="aeiou";
        for(int i=0;i<n/2;i++){
             if (vow.find(s1[i]) != string::npos) c1++;
        }
          for(int i=0;i<n/2;i++){
             if (vow.find(s2[i]) != string::npos) c2++;
        }
        return c1==c2;
        
    }
};