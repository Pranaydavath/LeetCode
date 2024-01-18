class Solution {
public:
    int minPartitions(string n) {
        int x=INT_MIN;
        int y=n.size();
        for(int i=0;i<y;i++){
            if(n[i]-'0'>x)x=n[i]-'0';
        }
        return (n[y-1]-'0')%10 + x-(n[y-1]-'0');
    }
};