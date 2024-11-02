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
               string p=res[i],q=res[i-1];
               if(p[0]!=q[y-1])return false;
           }
            string h=res[0],o=res[n-1];
            int z=res[n-1].size();
            if(h[0]==o[z-1])return true;
            return false;
        }
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<endl;
        }
       
    }
};