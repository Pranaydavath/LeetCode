class NumMatrix {
    
public:
  int n, m;
    vector<vector<int>>pre;   
    NumMatrix(vector<vector<int>>& mat) {
          n = mat.size();
        m = mat[0].size();
         pre.resize(n+1,vector<int>(m+1,0));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0||j==0)continue;
                pre[i][j]=pre[i-1][j]+pre[i][j-1]+mat[i-1][j-1]-pre[i-1][j-1];
            }
        }        
    }   
    int sumRegion(int r1, int c1, int r2, int c2) {
        r1++,c1++,r2++,c2++;
        return pre[r2][c2]+pre[r1-1][c1-1]-pre[r1-1][c2]-pre[r2][c1-1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */