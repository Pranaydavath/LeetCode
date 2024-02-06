class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n=m.size();
        vector<vector<int>>tp=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                m[i][j]=tp[j][i];
            }
        }
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<m[i][j]<<" ";
            }
             cout<<endl;
        }
        vector<vector<int>>tp1=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                m[i][j]=tp1[i][n-1-j];
            }
        }
    }
};