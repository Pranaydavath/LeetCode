class Solution {
public:
    string makeFancyString(string s) {
         s+='^';
     int n=s.size();
     string res="";
     int c=1;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            c=1;
          res+=s[i-1];
        }
        else{
            c+=1;
            res+=s[i-1];
            if(c==3){
               while(s[i]==s[i-1]){
                   i++;
               }
               c=1;
            }
            
        }
    }
    
return res;
    }
};