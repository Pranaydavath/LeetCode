class Solution {
public:
    int getCommon(vector<int>& v1, vector<int>& v2) {
         int n1=v1.size(),n2=v2.size();
        int ans=0;
       int i=0,j=0;
        while(i<n1&&j<n2){
            if(v1[i]>v2[j]){
                j++;
            }
            else if(v1[i]<v2[j]){
                i++;
            }
            if(i<n1&&j<n2&&v1[i]==v2[j]){
               return v1[i];
            }
        }
        return -1;
    }
};