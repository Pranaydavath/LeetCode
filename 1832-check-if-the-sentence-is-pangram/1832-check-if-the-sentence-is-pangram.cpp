class Solution {
public:
    bool checkIfPangram(string s) {
        int n=s.size();
        int a[26]={0};
        for(int i=0;i<n;i++)a[s[i]-'a']++;
        for(int i=0;i<26;i++){
            if(a[i]==0)return false;
        }
        return true;
    }
};