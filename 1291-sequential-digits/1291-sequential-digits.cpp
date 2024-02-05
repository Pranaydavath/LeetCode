class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int n1=low,n2=high,sd=0,ed=0;
        string s1=to_string(n1),s2=to_string(n2);
        sd=s1.size(),ed=s2.size();
        string s="123456789";
        set<int>ans;
        vector<int>v;
        while(sd<=ed){
                 for(int i=0;i<9;i++){
                string r=s.substr(i,sd);
                int h=stoi(r);
                if(h>=low&&h<=high)ans.insert(h);
            }
            sd++;
        }
        v.assign(ans.begin(),ans.end());
       
        return v;
    }
};