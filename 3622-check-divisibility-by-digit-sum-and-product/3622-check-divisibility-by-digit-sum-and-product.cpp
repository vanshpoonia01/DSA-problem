class Solution {
public:
    bool checkDivisibility(int n) {
        int p=1;
        int s=0;
        int a=n;
        while(a>0){
            int r =a%10;
            s+=r;
            p*=r;
            a/=10;
        }
        p+=s;
        return (n%p==0);
    }
};