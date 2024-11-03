class Solution {
public:
    bool rotateString(string s, string tar) {
        int n=s.size();
       for(int i=0;i<n;i++){
         rotate(s.rbegin(),s.rbegin()+1,s.rend());
        cout<<s<<endl;
           if(s==tar)return true;
       }
        
    return false;
    }
};