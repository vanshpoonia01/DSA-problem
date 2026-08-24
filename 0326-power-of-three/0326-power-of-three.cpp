class Solution {
public:
    bool isPowerOfThree(int n) {
       
        if(n==1)return true;
        if(n<3) return false;
        for(int i=0;i<n;i++){
            long long  a = pow(3,i);
            if(a==n) return true;
            if(a>n) return false;
        }
        return false;
    }
};