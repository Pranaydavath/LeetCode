class Solution {
public:
    int lengthOfLIS(vector<int>& v) {
        int n=v.size();
        vector<int> tp;
        tp.push_back(v[0]);
        for(int i=1;i<n;i++){
            if(v[i]>tp.back()){
                tp.push_back(v[i]);
            }
            else{
                int idx=lower_bound(tp.begin(),tp.end(),v[i])-tp.begin();
                tp[idx]=v[i];
            }
        }
        return tp.size();
    }
};