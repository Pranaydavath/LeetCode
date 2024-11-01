class Solution {
public:
    string makeFancyString(string s) {
     int n=s.size();
     string res="";
    res.push_back(s[0]);
     int c=1;
    for(int i=1;i<n;i++){
        if(s[i]==res.back()){
            c++;
            if(c<3){
                res.push_back(s[i]);
            }
        }
        else{
            c=1;
            res.push_back(s[i]);
        }
    }
    
    return res;
    }
};