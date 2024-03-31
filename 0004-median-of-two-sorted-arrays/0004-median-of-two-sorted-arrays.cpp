class Solution {
public:
    double findMedianSortedArrays(vector<int>& v1, vector<int>& v2) {
       int n1=v1.size(),n2=v2.size();
    vector<int> v;
    int p1=0,p2=0;
    while(p1<n1 && p2<n2){
        if(v1[p1]<=v2[p2]){
            v.push_back(v1[p1]);
             p1++;
        }
        else{
              v.push_back(v2[p2]);
             p2++;
        }
        
        
    }
     double f;
    while(p1<n1){
        v.push_back(v1[p1]);
             p1++;
    }
    while(p2<n2){
              v.push_back(v2[p2]);
             p2++;
        }
         int n=v.size();
        if(v.size()%2){
            return (double)v[n/2];
        }
       
        else{
          
            f=((float)v[n/2]+(float)v[n/2 -1])/2;
        }
        
        return f;
         
    }
};