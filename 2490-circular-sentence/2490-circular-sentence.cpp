class Solution {
public:
    bool isCircularSentence(string v) {
        char ch=v[0];
        v+=" ";
        vector<string> res;
        int i=0;
        for(i=0;i<v.size();i++){
             string r="";
            while(i<v.size()&&v[i]!=' '){
                r+=v[i];
                i++;
            }
            res.push_back(r);
        }
        int n=res.size();
        if(n==1){
            int x=res[0].size();
            if(res[0][0]==res[0][x-1]) return true;
            return false;
        }
        else{
           for(int i=1;i<n;i++){
               int y=res[i-1].size();
               if(res[i][0]!=res[i-1][y-1])return false;
           }
            if(res[0][0]==res[n-1][res[n-1].size()-1])return true;
            return false;
        }
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<endl;
        }
       
    }
};