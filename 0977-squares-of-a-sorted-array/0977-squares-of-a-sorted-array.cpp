class Solution {
public:
    vector<int> sortedSquares(vector<int>& v) {
      int n=v.size();
        int i=0,j=0;
        if(n==1)return {v[0]*v[0]};
        for(int k=0;k<n;k++){
            if(v[k]>=0){
                i=k-1;
                j=k;
                break;
            }
        }
        if(i==-1){
            i=0;
            j=1;
        }
        if(i==0&&j==0){
            i=n-2,j=n-1;
        }
        cout<<i<<" "<<j<<endl;
      vector<int>ans;
      while(i>=0&&j<n){
          int x=v[i]*v[i];
          int y=v[j]*v[j];
          if(x<y){
             ans.push_back(x);
              i--;
          }
          else {
             ans.push_back(y);
              j++;
          }
      }
        while(i>=0){
            ans.push_back(v[i]*v[i]);
                i--;
        }
         while(j<n){
            ans.push_back(v[j]*v[j]);
                j++;
        }
        return ans;
    }
};