#include<bits/stdc++.h>
#define sb(x) __builtin_popcountll(x)
#define usb(x) __builtin_ctzll(x)
class Solution {
public:
    bool check(int i,int j,vector<int>&v,vector<int>&sor){
        vector<int>t1,t2;
        for(int k=i;k<=j;k++)t1.push_back(v[k]);
        for(int k=i;k<=j;k++)t2.push_back(sor[k]);
        sort(t1.begin(),t1.end());
        if(t1==t2)return true;
        return false;
    }
    bool canSortArray(vector<int>& v) {
        int n=v.size();
        vector<int> setc(n,0);
        for(int i=0;i<n;i++){
            setc[i]=sb(v[i]);
        }
        vector<int>sarr=v;
        sort(sarr.begin(),sarr.end());
        for(int i=0;i<n;i++){
            int j=i;
            while(j+1<n&&setc[j]==setc[j+1]){
                j++;
            }
            if(j==n)j--;
            if(!check(i,j,v,sarr))return false;
            i=j;
        }
        return true;
        
    }
};