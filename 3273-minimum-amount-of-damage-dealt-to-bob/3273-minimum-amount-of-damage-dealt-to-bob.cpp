#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution {
public:
    long long minDamage(int power, vector<int>& damage, vector<int>& health) {
        int n=damage.size();
        vector<pair<double,int>> desired(n);
        for(int i=0;i<n;i++){
            double timetaken=ceil((double)health[i]/power);
            desired[i]={timetaken/damage[i],i};
        }
        sort(desired.begin(),desired.end());
        ll ans=0;
        ll tsum=accumulate(damage.begin(),damage.end(),0);
        for(int i=0;i<n;i++){
            int id=desired[i].second;
            int ttk=ceil((double)health[id]/power);
            ans+=ttk*tsum;
            tsum-=damage[id];
            
        }
        return ans;
    }
};