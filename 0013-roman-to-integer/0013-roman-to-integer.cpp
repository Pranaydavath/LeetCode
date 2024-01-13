class Solution {
public:
    int romanToInt(string str) {
        map<char,int>mp;
        mp.insert(make_pair('I',1));
        mp.insert(make_pair('V',5));
        mp.insert(make_pair('X',10));
        mp.insert(make_pair('L',50));
        mp.insert(make_pair('C',100));
        mp.insert(make_pair('D',500));
        mp.insert(make_pair('M',1000));
        int res=0;
        for(int i=0;i<str.size();){
            int sum=0;
            if(i==str.size()-1||mp[str[i]]>=mp[str[i+1]]){
             sum=mp[str[i]];   
             i++;
            }
            else{
             sum =mp[str[i+1]]-mp[str[i]];
             i=i+2;
            }
            res=res+sum;
        }
        return res;
    }
};