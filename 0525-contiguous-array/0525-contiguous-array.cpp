class Solution {
public:
    int findMaxLength(vector<int>& v) {
       int n=v.size();
       unordered_map<int,int> m;
       int r=0;
       for(int i=0;i<n;i++){
           if(v[i]==0)
            {
                v[i]=-1;
                r=1;

            }          
                    
       }
    //    for(auto it:v){
    //        m[it]++;
    //    }
       int s=0;
       int ans=INT_MIN;
       if(find(v.begin(),v.end(),1)==v.end())
            r=0;       
       for(int i=0;i<n;i++){
           s+=v[i];
           if(s==0){
               ans=max(ans,i+1);
           }
           if(m.find(s)!=m.end()){
               ans=max(ans,i-m[s]);
           }
           else
              m[s]=i;
       }
       if(r==0||n==1)
       return 0;
       return ans;

    }
};