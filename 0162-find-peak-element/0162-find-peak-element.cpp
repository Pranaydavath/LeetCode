class Solution {
public:
    int findPeakElement(vector<int>& v) {
        int n=v.size();
        int ans=max_element(v.begin(),v.end())-v.begin();
        return ans;
    }
};