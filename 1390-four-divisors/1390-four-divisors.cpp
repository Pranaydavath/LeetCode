class Solution {
public:
    int div(int n){
        int c=0,s=0;
    for (int i =1; i <= n/2;i++) {
        if (n % i == 0) {
            c++;
            s+=i;
        }
       if(c==4)break;
    }
       s+=n;
        c+=1;
        if(c==4)
        return s;
        return 0;
      
    }

    int sumFourDivisors(vector<int>& v) {
        int n=v.size();
        int s=0;
        for(auto it:v){
          
                s+=div(it);
        
        }
        return s;
    }
};