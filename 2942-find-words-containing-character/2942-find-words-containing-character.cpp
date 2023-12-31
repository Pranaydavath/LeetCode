class Solution {
public:
    vector<int> findWordsContaining(vector<string>& w, char x) {
        int n=w.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            string r=w[i];
            for(int j=0;j<r.size();j++){
                if(x==r[j]){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};