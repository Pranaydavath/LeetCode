class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& v) {
     int n=v.size();
        sort(v.begin(),v.end());
        int cnt=0;
        // vector<int>prev=v[0];
        int prev=0;
        for(int cur=1;cur<n;cur++){
            if(v[prev][1]>v[cur][0]){
                cnt++;
                if(v[cur][1]<=v[prev][1])prev=cur;
            }
            else prev=cur;
        }
        for(int i=0;i<n;i++)cout<<v[i][0]<<" "<<v[i][1];
        return cnt;
    }
};