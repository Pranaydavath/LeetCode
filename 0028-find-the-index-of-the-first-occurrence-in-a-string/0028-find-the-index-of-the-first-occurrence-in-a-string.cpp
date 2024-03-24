class Solution {
public:
    int strStr(string h, string r) {
        int idx;
        idx=h.find(r);
        if(idx!=string::npos){
            return idx;
        }
        return -1;
    }
};