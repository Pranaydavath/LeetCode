class Solution {
public:
    string compressedString(string s) {   
    int n=s.size();
   string res="";
      int i=0;
//         while(i<n){
//             j=i+1;
//             while(j<n&&s[i]==s[j]){
//                 c+=1;
//                 j++;
//                 if(c==9){
//                     res+='9';
//                     res+=s[i];
//                     c=1;
//                 }
//             }
            
//             res+=
        while(i<n){
              int c=0;
            char ch=s[i];
            while(i<n&&s[i]==ch&&c<9){
                i++;
                c++;
            }
            res+=to_string(c)+ch;
        }
        return res;
        
    }
};