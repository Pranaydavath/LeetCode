class Solution {
public:
    vector<int> twoSum(vector<int>& v, int k) {
     
        int n=v.size();
      
        vector<int>ans;
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++){
            p.push_back({v[i],i});
        }
        sort(p.begin(),p.end());
        int i=0,j=n-1;
        while(i<j){
            int sum=p[i].first+p[j].first;
            if(sum==k){
                ans.push_back(p[i].second);
                ans.push_back(p[j].second);
                break;
            }
            else if(sum>k)j--;
            else i++;
        }
     return ans;
    }
};