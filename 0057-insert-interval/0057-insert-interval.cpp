class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& nint) {
       // vector<vector<int>> res;
       // res=in;
          vector<vector<int>> ans;
        
        in.push_back(nint);
        sort(in.begin(),in.end());
        vector<int> temp=in[0];
        for(int i=1;i<in.size();i++){
            if(in[i][0]<=temp[1]){
                temp[1]=max(temp[1],in[i][1]);
            }
            else
            {
                ans.push_back(temp);
                temp=in[i];

            }
        }
        ans.push_back(temp);
        return ans;
    }
};