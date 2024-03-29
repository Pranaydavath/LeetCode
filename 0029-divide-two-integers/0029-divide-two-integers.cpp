class Solution {
public:
    long int divide(long int dividend,long int divisor) {
        long int ans=dividend/divisor;
     //   if(dividend <0 && divisor<0)
        //    ans=-ans;
    if (ans<INT_MIN)
        return INT_MIN;
        else if(ans>INT_MAX)
            return INT_MAX;
        
            return ans;
    }
};