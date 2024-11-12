class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& v, vector<int>& qu) {
        int n=v.size();
        int q=qu.size();
        sort(v.begin(),v.end());
        vector<vector<int>>qwi(q,vector<int>(2));
        for(int i=0;i<q;i++){
            qwi[i][0]=qu[i];
            qwi[i][1]=i;
        }
        vector<int>ans(q);
        sort(qwi.begin(),qwi.end());
        int msf=0,idx=0;
       for(int i=0;i<q;i++){
           int qp=qwi[i][0];
           int qidx=qwi[i][1];
           while(idx<n&&v[idx][0]<=qp){
               msf=max(msf,v[idx][1]);
               idx++;
           }
           ans[qidx]=msf;
       }
        
        return ans;
    }
};