class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& v1, vector<int>& v2) {
        int n1=v1.size(),n2=v2.size();
        vector<vector<int>>v(2);
        set<int>x,y;
        for(int i=0;i<n1;i++){
            
            if(find(v2.begin(),v2.end(),v1[i])==v2.end()){
                x.insert(v1[i]);
            }
               
        }
        v[0].assign(x.begin(),x.end());
         for(int i=0;i<n2;i++){
            if(find(v1.begin(),v1.end(),v2[i])==v1.end())y.insert(v2[i]);
   
        }
        v[1].assign(y.begin(),y.end());
        
        return v;
        
    }
};