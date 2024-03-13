class DataStream {
public:
    
    
    int val,k;
    int i=0,j=0;
    vector<int>v;
    DataStream(int value, int k) {
        this->val=value;
        this->k=k;
    }
    int c=0;
  
    bool consec(int num) {
        v.push_back(num);
        if(v[j]==val)c++;
          bool ans=false;
        
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if(c==k)ans=true;
            if(v[i]==val)c--;
            i++;
            j++;
        }
        return ans;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */