class Solution {
public:
//    bool checkbit(int n,int i){
//     return n&(1<<i);
//    }
    int largestCombination(vector<int>& v) {
     int n=v.size();
        int mx=INT_MIN;
        // for(int i=0;i<n;i++)cin>>v[i];

        for(int i=0;i<32;i++){
           int ct=0;
          for(int j=0;j<n;j++){
            if(v[j]&(1<<i))ct++;
          }
          cout<<mx<<" ";
          mx=max(mx,ct);
        }
       return mx;
     }
    
};