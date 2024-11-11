#define ll long long int
class Solution {
public:
    static const ll MX=1005;
    bool prime[MX];
      void sieve(){
         fill(prime,prime+MX,true);
      prime[0]=false;
        prime[1]=false;
      for(ll i=2;i*i<MX;i++){
          if(prime[i]){
              for(ll j=i*i;j<MX;j+=i){
                 prime[j]=false;
             }
          }
        
       }
      }
    bool primeSubOperation(vector<int>& v) {
      sieve();  
        int n=v.size();
        vector<int>tp(n);
        vector<int>primes;
        for(int i=2;i<1002;i++){
           if(prime[i])primes.push_back(i);
        }
        tp[n-1]=v[n-1];
        for(int i=n-2;i>=0;i--){
            if(v[i]<tp[i+1]){
                tp[i]=v[i];
                continue;
            }
            for(auto it:primes){
                if(it>=v[i]){
                    tp[i]=v[i];
                    break;
                }
                if(v[i]-it<tp[i+1]){
                    tp[i]=v[i]-it;
                    break;
                }
            }
        }
        for(int i=0;i<n-1;i++){
            if(tp[i]>=tp[i+1])return false;
        }
        return true;
    }
};