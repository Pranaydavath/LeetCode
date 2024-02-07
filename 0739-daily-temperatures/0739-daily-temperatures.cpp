class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& v) {
        int n=v.size();
        stack<pair<int,int>>st;
        vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&st.top().first<=v[i])st.pop();
            if(!st.empty())ans[i]=st.top().second-i;
            st.push({v[i],i});
            
        }
        return ans;
    }
};