class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int ans=0;
        int i=0,j=n-1;
        while(i<j){
            if(s[i]==s[j]){
                char c1=s[i],c2=s[j];
                while(c1==s[i]&&i<n)i++;
                while(c2==s[j]&&j>0)j--;
            }
            else break;
            
        }
       if(i>j)return 0;
        return j-i+1;
    }
};