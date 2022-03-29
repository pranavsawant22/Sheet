class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)return 1;
        if(n==1)return x;
        if(x==1)return 1.0000;
        bool f=(n<0);
        if(f)n=abs(n);
        double ans=1;
        while(n){
            if(n&1)ans*=x;
            x*=x;
            n/=2;
        }
        if(f)return (1/ans);
        return ans;
    }
};