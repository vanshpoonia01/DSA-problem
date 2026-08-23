class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans;
        int a=n;
        int s=0;
        while(a>0){
            int r= a%10;
            if(r!=0)
            s = 10*s+r;
            a/=10;

        }
     a=s;
     s=0;
     int sum =0;
          while(a>0){
            int r= a%10;
            sum+=r;
            s = 10*s+r;
            a/=10;

        }
        
         
        ans = 1LL*s*sum;
        return ans;
    }
};